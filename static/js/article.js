"use strict";

$(document).ready(function() {
    $("#content").addClass("container");
    $("#content").css("width", $(window).width() - 300);
    $("#table-of-contents")
	.height($(window).height())
    	.addClass("hidden-print")
	.addClass("hidden-xs")
	.addClass("hidden-sm")
	.addClass("affix");
    $("#text-table-of-contents>ul")
	.addClass("nav")
	.attr("role", "navigation");
    $("body").scrollspy({target: "#text-table-of-contents"});
    if ($("#table-of-contents").css("display") == "none") {
	$("#content").css("margin-left", 0);
	$("#postamble").css("display", "none");
    }
    
    $("table").addClass("table").addClass("table-bordered");
});
