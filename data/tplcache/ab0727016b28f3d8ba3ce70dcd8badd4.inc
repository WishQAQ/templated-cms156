[field:array runphp='yes']if(empty(@me["litpic"]) || preg_match('/defaultpic/', @me["litpic"])){@me = '
      <div class="item item_txt">
        <div class="text">
          <div class="fa_yhei fs_18 t fw"><a href="'.@me["arcurl"].'">'.@me["fulltitle"].'</a></div>
          <p class="attrs"><span class="date fc_999">'.GetDateTimeMK(@me["pubdate"]).'</span></p>
          <p class="infos fc_666 fs_14">'.@me["infos"].' ... <a class="fc_orange" href="'.@me["arcurl"].'" title="'.@me["fulltitle"].'">[ÏêÏ¸]</a></p>
        </div>
      </div>';}else{@me = '<div class="item item_img"><a class="img" href="'.@me["arcurl"].'"><img class="lazy" src="'.@me["litpic"].'" width="120" height="90" alt="'.@me["fulltitle"].'" /></a>
        <div class="text">
          <div class="fa_yhei fs_18 t fw"><a href="'.@me["arcurl"].'">'.@me["fulltitle"].'</a></div>
          <p class="attrs"><span class="date fc_999">'.GetDateTimeMK(@me["pubdate"]).'</span></p>
          <p class="infos fc_666 fs_14">'.@me["infos"].' ... <a class="fc_orange" href="'.@me["arcurl"].'" title="'.@me["fulltitle"].'">[ÏêÏ¸]</a></p>
        </div>
      </div>';}[/field:array]