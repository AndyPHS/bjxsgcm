<?php
$z[0]=Array("field","",107,134);
$z[0][4]=array();
$z[0][4]['name']="phpurl";
$z[1]=Array("arclist","\r\n <dd><a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" alt=\"[field:title/]\" ></a></dd>\r\n <span><a title=\"[field:title function='htmlspecialchars(@me)'/] \" href=\"[field:arcurl /]\">[field:title /]</a></span>\r\n ",727,1018);
$z[1][4]=array();
$z[1][4]['row']="4";
$z[1][4]['titlelen']="56";
$z[1][4]['orderby']="pubdate";
$z[1][4]['type']="image.";
$z[2]=Array("arclist","\r\n<li><a href=\"[field:arcurl/]\" title=\"[field:title/]\" target=\"_blank\">[field:title/]</a></li>\r\n",1118,1301);
$z[2][4]=array();
$z[2][4]['flag']="";
$z[2][4]['typeid']="";
$z[2][4]['titlelen']="56";
$z[2][4]['row']="7";
$z[2][4]['orderby']="pubdate";
$z[3]=Array("arclist","\r\n<li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n",1408,1561);
$z[3][4]=array();
$z[3][4]['flag']="";
$z[3][4]['typeid']="";
$z[3][4]['titlelen']="56";
$z[3][4]['row']="10";
$z[3][4]['orderby']="click";
$z[3][4]['subday']="";
$z[4]=Array("sql","文章总数：[field:c /]",1668,1777);
$z[4][4]=array();
$z[4][4]['sql']="select count(*) as c from dede_archives where channel=1";
$z[5]=Array("sql","评论总数：[field:c /]",1788,1882);
$z[5][4]=array();
$z[5][4]['sql']="select count(id) as c from dede_feedback";
$z[6]=Array("sql","本月更新：[field:c /]",1893,2041);
$z[6][4]=array();
$z[6][4]['sql']="select count(id) as c from dede_archives where from_unixtime(pubdate,'%m') = month(curdate( ))";
$z[7]=Array("sql","访问总数：[field:c /]",2052,2147);
$z[7][4]=array();
$z[7][4]['sql']="select sum(click) as c from dede_archives";
$z[8]=Array("flink","\r\n<li>[field:link /]</li>\r\n",2323,2415);
$z[8][4]=array();
$z[8][4]['linktype']="2";
$z[8][4]['type']="textimage";
$z[8][4]['row']="100";

?>