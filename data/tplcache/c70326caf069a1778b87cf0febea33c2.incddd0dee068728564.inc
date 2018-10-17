<?php
$z[0]=Array("arcurl","",73,88);
$z[0][4]=array();
$z[1]=Array("title","",97,111);
$z[1][4]=array();
$z[2]=Array("title","",113,127);
$z[2][4]=array();
$z[3]=Array("pubdate","",192,239);
$z[3][4]=array();
$z[3][4]['function']="MyDate('y-m-d',@me)";
$z[4]=Array("typeurl","",305,321);
$z[4][4]=array();
$z[5]=Array("typename","",323,340);
$z[5][4]=array();
$z[6]=Array("id","\r\n             \$tsql = new DedeSql(false);\r\n             \$tags = '';\r\n             \$tsql->SetQuery(\"Select i.tag From #@__taglist t left join #@__tagindex i on i.id=t.tid where t.aid='@me'\");\r\n             \$tsql->Execute('t');\r\n             while(\$row = \$tsql->GetArray('t',MYSQL_ASSOC)){\r\n             \$tags .= \"<a href='/tags.php?/\".urlencode(\$row['tag']).\"'>\".\$row['tag'].\"</a>\";\r\n             }\r\n             @me=\$tags;",384,839);
$z[6][4]=array();
$z[6][4]['runphp']="yes";
$z[7]=Array("id","\$dsql = new dedesql();\$dsql -> SetQuery(\"Select count(id) as c from #@__feedback where aid=\".@me);\$row = \$dsql -> getone();@me=\$row['c'];",873,1044);
$z[7][4]=array();
$z[7][4]['runphp']="yes";
$z[8]=Array("array","@me = (strpos(@me['litpic'],'defaultpic') ? \"\" : \"<a href='{@me['arcurl']}'><img src='{@me['litpic']}'/></a>\"); ",1107,1259);
$z[8][4]=array();
$z[8][4]['runphp']="yes";
$z[9]=Array("description","",1300,1320);
$z[9][4]=array();
$z[10]=Array("arcurl","",1371,1386);
$z[10][4]=array();

?>