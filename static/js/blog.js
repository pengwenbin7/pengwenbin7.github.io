"use strict";

$(document).ready(function() {
    $("#content").addClass("ui")
	.addClass("container");
    $("#postamble").addClass("ui")
	.addClass("center")
	.addClass("aligned")
	.addClass("container");
    $("#table-of-contents>h2").text("目录");
    $("#text-table-of-contents>ul").addClass("ui")
	.addClass("list");
    $("#text-table-of-contents>ul>li").addClass("item");
    $("h2").addClass("ui").addClass("header");
    $(".outline-2").addClass("ui")
    	.addClass("stacked")
	.addClass("segment");
});
