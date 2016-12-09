#!/usr/bin/python2

import os
import json
from HTMLParser import HTMLParser

root = "."
htmls = []
info = []

# create a subclass and override the handler methods
class MyHTMLParser(HTMLParser):
    flag = 0
    title = ""
    def handle_starttag(self, tag, attr):
        if tag == "title":
            self.flag = 1

    def handle_endtag(self, tag):
        if tag == "title":
            self.flag = 0
            
    def handle_data(self, data):
        if self.flag == 1:
            self.title = data.strip()

def getTitle(html):            
    parser = MyHTMLParser()
    f = open(html)
    parser.feed(f.read())
    return parser.title


def findHtml(dir):
    files = os.listdir(dir)
    for f in files:
        if os.path.isdir(dir + "/" + f):
            findHtml(dir + "/" + f)
        else:
            if f.endswith(".html") and (f != "index.html"):
                htmls.append(dir + "/" + f)
    return htmls

htmls = findHtml(root)
htmls = sorted(htmls, key=os.path.getctime, reverse=True)

for i in htmls:
    info.append({"file": i, "ctime": int(os.path.getctime(i)), "title": getTitle(i)})

f = open("static/htmls.json", "w")    
json.dump(info, f)
