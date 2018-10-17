<div class="topic-content">
<div class="post-date"><small>[field:pubdate function="MyDate('m',@me)"/]月</small><span>[field:pubdate function="MyDate('d',@me)"/]日</span></div>
<div class="post-title">
<h2><a title="" href="[field:arcurl/]" >[field:title/]</a></h2>
<span class="comments"><em>[field:scores/]</em> </a>人评论</span>
<h6>作者:&nbsp;&nbsp;文章分类: <a target="_blank" href="[field:typeurl/]" title="[field:typename/]">[field:typename/]</a>&nbsp;&nbsp;浏览:<span id="spn355">[field:click/]</span></h6>
</div>
<div class="post-list-info">
<p>[field:description/]...<a href="[field:arcurl/]" target="_blank" title="[field:title/]">[余下全文]</a></p>
</div>
<div class="the-comment-tags">
<span>Tags:[field:id runphp=yes]
                    $tsql = new DedeSql(false);
    $tags = '';
    $tsql->SetQuery("Select i.tag From #@__taglist t left join #@__tagindex i on i.id=t.tid where t.aid='@me'");
    $tsql->Execute('t');
    while($row = $tsql->GetArray('t',MYSQL_ASSOC)){
       $tags .= "<a href='/tags.php?/".urlencode($row['tag'])."'>".$row['tag']."</a>&nbsp;&nbsp;";
    }
    @me=$tags;
                [/field:id]&nbsp;&nbsp;</span><em>评论人数[field:scores/]人 </a></em>
</div>
</div>