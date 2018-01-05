<!DOCTYPE html>
<head>
<meta http-equiv="Cache-Control" content="must-revalidate,no-cache,no-transform">
<meta content="mobiSiteGalore" name="Generator" />
<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1"/>
<meta name="apple-touch-fullscreen" content="YES" />
<meta name="apple-mobile-web-app-capable" content="yes" />
<meta name="viewport" content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0" />
<meta name="format-detection" content="telephone=no">
<title><?php echo $cfg_webname;?></title>
<link href="<?php echo $cfg_cmspath;?>/wap/style.css" rel="stylesheet" type="text/css">
<script type="text/javascript" src="<?php echo $cfg_cmspath;?>/wap/js/jquery-2.1.1.min.js"></script>
 
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"></head>
<body>
<div id="page_head">
  <div class="box">
    <div id="logo"><a href="<?php echo $cfg_cmspath;?>/wap.php"><img src="/wap/images/logo.png"></a></div>
    <div id="logo_right"> <a id="toggle_nav" class="glyphicon glyphicon-align-justify"></a> </div>
  </div>
</div>
<div id="page_head_box_nav">
  <ul class="nav-menu">
    <?php echo $channellist;?>
    <div class="clearfix"></div>
  </ul>
</div>
<div class="clearfix"></div>
<main>
<section>
<h1>对不起你访问的参数不正确！</h1>	
<div class="backlist"><a href="wap.php">点击返回首页</a></div>
  </section> 
  </main>
<div class="footer">
	<div class="foot_nav"><?php echo $channellist;?></div>
	<div class="foot_nav"><a href="<?php echo $cfg_wap;?>" target="_blank">WAP 版</a> | <a href="<?php echo $cfg_basehost;?>" target="_blank">电脑版</a></div>
    <p><?php echo $cfg_powerby;?> <a href="http://www.dedesos.com/" title="去掉此链接，将不提供WAP修复" target="_blank">秀站网</a></p>
</div>
 
<div id="goTopBtn"><img src="/wap/images/top.png" width="30"></div>
<script src="/wap/js/top.js" type="text/javascript"></script>
<script type="text/javascript">goTopEx();</script>
<script type="text/javascript">
jQuery(document).ready(function(){
  jQuery("#toggle_nav").click(function(){
  	jQuery("#page_head_box_nav").toggle();
  });
  jQuery("#toggle_search").click(function(){
	jQuery("#page_head_box_nav").hide();
  });
});
</script>
</body>
</html>