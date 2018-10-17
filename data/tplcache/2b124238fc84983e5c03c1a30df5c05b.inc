<dl class="tbox">
    <dt><strong><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></strong><span class="more"><a href="{dede:field name='typeurl'/}">更多...</a></span></dt>
    <dd>
     <ul class="d1 ico3">
      {dede:arclist titlelen='60' row='5'}
      <li>
       <span>[field:pubdate function="MyDate('m-d',@me)"/]</span>
       <a href="[field:arcurl /]">[field:title /]</a>
       <div>
        <p><small>日期：</small>[field:pubdate function="GetDateTimeMK(@me)"/] <small>点击：</small>[field:click/]</p>
        <p class="intro"><span>[摘要]</span> [field:description/]... </p>
       </div>

      </li>
      {/dede:arclist}
     </ul>
    </dd>
   </dl>