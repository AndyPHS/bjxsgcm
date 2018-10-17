<div id="listArticle">
		
		<div class="listtitle">
		  	<h3><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></h3>
		</div>
		
		<span class="info">
		  <small>日期：[field:pubdate function="MyDate('y-m-d',@me)"/]</small>&nbsp;｜&nbsp;
		  <small>分类：<a target="_blank" href='[field:typeurl/]'>[field:typename/]</a></small>&nbsp;｜&nbsp;
			<small>标签：[field:id runphp=yes]
             $tsql = new DedeSql(false);
             $tags = '';
             $tsql->SetQuery("Select i.tag From #@__taglist t left join #@__tagindex i on i.id=t.tid where t.aid='@me'");
             $tsql->Execute('t');
             while($row = $tsql->GetArray('t',MYSQL_ASSOC)){
             $tags .= "<a href='/tags.php?/".urlencode($row['tag'])."'>".$row['tag']."</a>";
             }
             @me=$tags;[/field:id]</small>&nbsp;｜&nbsp;
			<small>[field:ID runphp='yes']$dsql = new dedesql();$dsql -> SetQuery("Select count(id) as c from #@__feedback where aid=".@me);$row = $dsql -> getone();@me=$row['c'];[/field:ID] Comments</small>
		</span>	
		
		<div class="preview">
			[field:array runphp='yes']@me = (strpos(@me['litpic'],'defaultpic') ? "" : "<a href='{@me['arcurl']}'><img src='{@me['litpic']}'/></a>"); [/field:array]
		</div>	
		
		<p class="intro">
			[field:description/]
		</p>	
		
		<p class="readMore">
			<a href="[field:arcurl/]">阅读剩余部分...</a>
		</p>	
							
	</div>