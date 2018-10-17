<?php
$z[0]=Array("global","",236,264);
$z[0][4]=array();
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("global","",304,334);
$z[1][4]=array();
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",371,398);
$z[2][4]=array();
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("global","",666,698);
$z[3][4]=array();
$z[3][4]['name']="cfg_templets_skin";
$z[4]=Array("include","",1051,1088);
$z[4][4]=array();
$z[4][4]['filename']="header.htm";
$z[5]=Array("arclist","\r\n	<div id=\"listArticle\">\r\n		\r\n		<div class=\"listtitle\">\r\n		  	<h3><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h3>\r\n		</div>\r\n		\r\n		<span class=\"info\">\r\n		  <small>日期：[field:pubdate function=\"MyDate('y-m-d',@me)\"/]</small>&nbsp;｜&nbsp;\r\n		  <small>分类：<a target=\"_blank\" href='[field:typeurl/]'>[field:typename/]</a></small>&nbsp;｜&nbsp;\r\n			<small>标签：[field:id runphp=yes]\r\n             \$tsql = new DedeSql(false);\r\n             \$tags = '';\r\n             \$tsql->SetQuery(\"Select i.tag From #@__taglist t left join #@__tagindex i on i.id=t.tid where t.aid='@me'\");\r\n             \$tsql->Execute('t');\r\n             while(\$row = \$tsql->GetArray('t',MYSQL_ASSOC)){\r\n             \$tags .= \"<a href='/tags.php?/\".urlencode(\$row['tag']).\"'>\".\$row['tag'].\"</a>\";\r\n             }\r\n             @me=\$tags;[/field:id]</small>&nbsp;｜&nbsp;\r\n			<small>[field:ID runphp='yes']\$dsql = new dedesql();\$dsql -> SetQuery(\"Select count(id) as c from #@__feedback where aid=\".@me);\$row = \$dsql -> getone();@me=\$row['c'];[/field:ID] Comments</small>\r\n		</span>	\r\n		\r\n		<div class=\"preview\">\r\n			[field:array runphp='yes']@me = (strpos(@me['litpic'],'defaultpic') ? \"\" : \"<a href='{@me['arcurl']}'><img src='{@me['litpic']}'/></a>\"); [/field:array]\r\n		</div>	\r\n		\r\n		<p class=\"intro\">\r\n			[field:description/]\r\n		</p>	\r\n		\r\n		<p class=\"readMore\">\r\n			<a href=\"[field:arcurl/]\">阅读剩余部分...</a>\r\n		</p>	\r\n							\r\n	</div>\r\n",1267,2755);
$z[5][4]=array();
$z[5][4]['row']="8";
$z[5][4]['titlelen']="60";
$z[6]=Array("include","",2935,2973);
$z[6][4]=array();
$z[6][4]['filename']="sidebar.htm";
$z[7]=Array("include","",3007,3044);
$z[7][4]=array();
$z[7][4]['filename']="footer.htm";

?>