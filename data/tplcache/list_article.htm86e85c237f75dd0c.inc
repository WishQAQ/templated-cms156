<?php
$z[0]=Array("field","",243,265);
$z[0][4]['name']="seotitle";
$z[1]=Array("global","",266,292);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",333,355);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",395,446);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",647,669);
$z[4][4]['name']="cfg_wap";
$z[5]=Array("include","",1200,1235);
$z[5][4]['filename']="head.htm";
$z[6]=Array("field","",1338,1367);
$z[6][4]['name']="position";
$z[7]=Array("arclist"," <a class=\"top_img item fl w340\" href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\"><img src=\"[field:litpic/]\" height=\"222\" width=\"340\" alt=\"[field:fulltitle/]\" /><span class=\"t hidtit_2 fs_18 ftc fa_yhei\" title=\"[field:fulltitle/]\">[field:title/]</span></a>\r\n    ",1470,1807);
$z[7][4]['row']="1";
$z[7][4]['flag']="p";
$z[7][4]['titlelen']="40";
$z[7][4]['infolen']="110";
$z[8]=Array("arclist","\r\n        <h4 class=\"mb fs_18 fa_yhei ftc\"><a class=\"fc_36a\" href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\">[field:title/]</a></h4>\r\n        ",1866,2070);
$z[8][4]['row']="1";
$z[8][4]['flag']="c";
$z[8][4]['titlelen']="30";
$z[9]=Array("arclist","\r\n        <li class=\"item\"><a href=\"[field:arcurl/]\" title=\"[field:fulltitle/]\">[field:title/]</a></li>\r\n        ",2080,2244);
$z[9][4]['row']="8";
$z[9][4]['titlelen']="40";
$z[10]=Array("field","",2446,2465);
$z[10][4]['name']="title";
$z[11]=Array("list","\r\n      [field:array runphp='yes']if(empty(@me[\"litpic\"]) || preg_match('/defaultpic/', @me[\"litpic\"])){@me = '\r\n      <div class=\"item item_txt\">\r\n        <div class=\"text\">\r\n          <div class=\"fa_yhei fs_18 t fw\"><a href=\"'.@me[\"arcurl\"].'\">'.@me[\"fulltitle\"].'</a></div>\r\n          <p class=\"attrs\"><span class=\"date fc_999\">'.GetDateTimeMK(@me[\"pubdate\"]).'</span></p>\r\n          <p class=\"infos fc_666 fs_14\">'.@me[\"infos\"].' ... <a class=\"fc_orange\" href=\"'.@me[\"arcurl\"].'\" title=\"'.@me[\"fulltitle\"].'\">[��ϸ]</a></p>\r\n        </div>\r\n      </div>';}else{@me = '<div class=\"item item_img\"><a class=\"img\" href=\"'.@me[\"arcurl\"].'\"><img class=\"lazy\" src=\"'.@me[\"litpic\"].'\" width=\"120\" height=\"90\" alt=\"'.@me[\"fulltitle\"].'\" /></a>\r\n        <div class=\"text\">\r\n          <div class=\"fa_yhei fs_18 t fw\"><a href=\"'.@me[\"arcurl\"].'\">'.@me[\"fulltitle\"].'</a></div>\r\n          <p class=\"attrs\"><span class=\"date fc_999\">'.GetDateTimeMK(@me[\"pubdate\"]).'</span></p>\r\n          <p class=\"infos fc_666 fs_14\">'.@me[\"infos\"].' ... <a class=\"fc_orange\" href=\"'.@me[\"arcurl\"].'\" title=\"'.@me[\"fulltitle\"].'\">[��ϸ]</a></p>\r\n        </div>\r\n      </div>';}[/field:array]\r\n      ",2540,3765);
$z[11][4]['pagesize']="15";
$z[11][4]['infolen']="210";
$z[12]=Array("pagelist","",3805,3871);
$z[12][4]['listitem']="index,end,pre,next,pageno";
$z[12][4]['listsize']="3";
$z[13]=Array("include","",3891,3927);
$z[13][4]['filename']="right.htm";
$z[14]=Array("include","",3937,3972);
$z[14][4]['filename']="foot.htm";

?>