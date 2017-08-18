#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char *name;
} People;

int add(int a, int b)
{
    return a + b;
}

People *newPeople(int age, char *name)
{
    People *p = (People *) malloc(sizeof(People));
    p->age = age;
    p->name = name;
    return p;
}

char *sayHi(char *s)
{
    char *hi = (char *) malloc(strlen(s) + 5);
    sprintf(hi, "Hi, %s.", s);
    return hi;
}

int main(int argc, char *argv)
{
    People *p = newPeople(13, "Sara Scott");
    printf("%d, %s\n", p->age, p->name);
    printf("%s\n", sayHi("Tom cat"));

    return 0;
}
