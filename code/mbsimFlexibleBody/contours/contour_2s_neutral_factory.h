



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "ABZ6GAeK2WaRq0X5mFBaDlyA29AE0axgaQ:1420558294999";
 
 
 var CS_env = {"loggedInUserEmail": "wangzhanrock@gmail.com", "projectName": "mbsim-env", "profileUrl": "/u/117234204990931991355/", "projectHomeUrl": "/p/mbsim-env", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/1729405847801014513", "relativeBaseUrl": "", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "domainName": null, "token": "ABZ6GAeK2WaRq0X5mFBaDlyA29AE0axgaQ:1420558294999"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>contour_2s_neutral_factory.h - 
 mbsim-env -
 
 
 MBSim is a multi-body simulation software. - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/1729405847801014513/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/1729405847801014513/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/1729405847801014513/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="https://ssl.gstatic.com/codesite/ph/1729405847801014513/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(https://ssl.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>wangzhanrock@gmail.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/117234204990931991355/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/117234204990931991355/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Fmbsim-env%2Fsource%2Fbrowse%2Ftrunk%2Fmodules%2FmbsimFlexibleBody%2FmbsimFlexibleBody%2Fcontours%2Fcontour_2s_neutral_factory.h" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/mbsim-env">
 <a href="/p/mbsim-env/">
 
 <img src="https://ssl.gstatic.com/codesite/ph/images/defaultlogo.png" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/mbsim-env/"><span itemprop="name">mbsim-env</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/mbsim-env/"><span itemprop="description">MBSim is a multi-body simulation software.</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/mbsim-env/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 
 
 
 
 <a href="/p/mbsim-env/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/mbsim-env/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/mbsim-env/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/mbsim-env/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/mbsim-env/source/list">Changes</a></span> &nbsp;
 
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/mbsim-env/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/mbsim-env/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/">modules</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/">mbsimFlexibleBody</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/">mbsimFlexibleBody</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/">contours</a><span class="sp">/&nbsp;</span>contour_2s_neutral_factory.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/mbsim-env/source/browse/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h?r=3296" title="Previous">&lsaquo;r3296</a></li>
 
 </ul>
 </td>
 
 <td class="flipper"><b>r3623</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(https://ssl.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn3623_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn3623_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn3623_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn3623_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn3623_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn3623_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn3623_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn3623_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn3623_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn3623_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn3623_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn3623_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn3623_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn3623_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn3623_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn3623_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn3623_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn3623_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn3623_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn3623_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn3623_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn3623_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn3623_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn3623_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn3623_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn3623_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn3623_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn3623_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn3623_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn3623_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn3623_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn3623_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn3623_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn3623_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn3623_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn3623_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn3623_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn3623_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn3623_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn3623_40"

><td id="40"><a href="#40">40</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn3623_1

><td class="source">/*<br></td></tr
><tr
id=sl_svn3623_2

><td class="source"> * contour_2s_neutral_factory.h<br></td></tr
><tr
id=sl_svn3623_3

><td class="source"> *<br></td></tr
><tr
id=sl_svn3623_4

><td class="source"> *  Created on: 25.10.2013<br></td></tr
><tr
id=sl_svn3623_5

><td class="source"> *      Author: zwang<br></td></tr
><tr
id=sl_svn3623_6

><td class="source"> */<br></td></tr
><tr
id=sl_svn3623_7

><td class="source"><br></td></tr
><tr
id=sl_svn3623_8

><td class="source">#ifndef CONTOUR_2S_NEUTRAL_FACTORY_H_<br></td></tr
><tr
id=sl_svn3623_9

><td class="source">#define CONTOUR_2S_NEUTRAL_FACTORY_H_<br></td></tr
><tr
id=sl_svn3623_10

><td class="source"><br></td></tr
><tr
id=sl_svn3623_11

><td class="source">#include &quot;mbsim/contours/contour2s.h&quot;<br></td></tr
><tr
id=sl_svn3623_12

><td class="source">#include &quot;mbsimFlexibleBody/utils/contact_utils.h&quot;<br></td></tr
><tr
id=sl_svn3623_13

><td class="source">namespace MBSimFlexibleBody {<br></td></tr
><tr
id=sl_svn3623_14

><td class="source">  <br></td></tr
><tr
id=sl_svn3623_15

><td class="source">  class Contour2sNeutralFactory: public MBSim::Contour2s {<br></td></tr
><tr
id=sl_svn3623_16

><td class="source">    public:<br></td></tr
><tr
id=sl_svn3623_17

><td class="source">      Contour2sNeutralFactory(const std::string &amp;name):MBSim::Contour2s(name){};<br></td></tr
><tr
id=sl_svn3623_18

><td class="source">      virtual ~Contour2sNeutralFactory(){};<br></td></tr
><tr
id=sl_svn3623_19

><td class="source">      virtual std::string getType() const {<br></td></tr
><tr
id=sl_svn3623_20

><td class="source">        return &quot;Contour2sNeutralFactory&quot;;<br></td></tr
><tr
id=sl_svn3623_21

><td class="source">      }<br></td></tr
><tr
id=sl_svn3623_22

><td class="source">      /* INHERITED INTERFACE OF CONTOURCONTINUUM */<br></td></tr
><tr
id=sl_svn3623_23

><td class="source">      virtual void computeRootFunctionPosition(MBSim::ContourPointData &amp;cp) { updateKinematicsForFrame(cp, MBSim::Frame::position); }<br></td></tr
><tr
id=sl_svn3623_24

><td class="source">      virtual void computeRootFunctionFirstTangent(MBSim::ContourPointData &amp;cp) { updateKinematicsForFrame(cp, MBSim::Frame::firstTangent); }<br></td></tr
><tr
id=sl_svn3623_25

><td class="source">      virtual void computeRootFunctionNormal(MBSim::ContourPointData &amp;cp) { updateKinematicsForFrame(cp, MBSim::Frame::normal); }<br></td></tr
><tr
id=sl_svn3623_26

><td class="source">      virtual void computeRootFunctionSecondTangent(MBSim::ContourPointData &amp;cp) { updateKinematicsForFrame(cp, MBSim::Frame::secondTangent); }<br></td></tr
><tr
id=sl_svn3623_27

><td class="source">      /***************************************************/<br></td></tr
><tr
id=sl_svn3623_28

><td class="source"><br></td></tr
><tr
id=sl_svn3623_29

><td class="source">      /* INHERITED INTERFACE OF CONTOUR */<br></td></tr
><tr
id=sl_svn3623_30

><td class="source">      virtual void init(InitStage stage) = 0;<br></td></tr
><tr
id=sl_svn3623_31

><td class="source">      virtual void updateKinematicsForFrame(MBSim::ContourPointData &amp;cp, MBSim::Frame::Feature ff) = 0;<br></td></tr
><tr
id=sl_svn3623_32

><td class="source">      virtual void updateJacobiansForFrame(MBSim::ContourPointData &amp;cp, int j = 0) = 0;<br></td></tr
><tr
id=sl_svn3623_33

><td class="source">      virtual MBSim::ContactKinematics * findContactPairingWith(std::string type0, std::string type1){<br></td></tr
><tr
id=sl_svn3623_34

><td class="source">        return findContactPairingFlexible(type0.c_str(), type1.c_str());<br></td></tr
><tr
id=sl_svn3623_35

><td class="source">      }<br></td></tr
><tr
id=sl_svn3623_36

><td class="source"><br></td></tr
><tr
id=sl_svn3623_37

><td class="source">  };<br></td></tr
><tr
id=sl_svn3623_38

><td class="source"><br></td></tr
><tr
id=sl_svn3623_39

><td class="source">} /* namespace MBSimFlexibleBody */<br></td></tr
><tr
id=sl_svn3623_40

><td class="source">#endif<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn3623_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn3623_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/mbsim-env/source/detail?spec=svn3623&amp;r=3297">r3297</a>
 by kgrundl
 on Jul 12, 2014
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=3297&amp;format=side&amp;path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h&amp;old_path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h&amp;old=3259">Diff</a>
 </div>
 <pre>reintegrate FFR (=user/grundl) branch into
trunk</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/mbsim-env/source/detail?r=3297&spec=svn3623';
 var publish_url = '/p/mbsim-env/source/detail?r=3297&spec=svn3623#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk');
 changed_urls.push('/p/mbsim-env/source/browse/trunk?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/control/robot');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/control/robot?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/control/robot/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/control/robot/system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/control/robot/system.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/control/robot/system.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/electronics/electrical_circuit');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/electronics/electrical_circuit?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/2pendulums');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/2pendulums?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/hierachical_modelling');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/hierachical_modelling?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/kinematics_1');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/kinematics_1?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/kinematics_2');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/kinematics_2?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/one_mass_oscillator');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/one_mass_oscillator?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/pendulum_with_joints');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/pendulum_with_joints?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/pendulum_with_tree_structure');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/pendulum_with_tree_structure?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/pendulum_with_tree_structure/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/pendulum_with_tree_structure/system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/pendulum_with_tree_structure/system.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/pendulum_with_tree_structure/system.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/reorganize_hierarchy');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/reorganize_hierarchy?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/reorganize_hierarchy/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/reorganize_hierarchy/system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/reorganize_hierarchy/system.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/reorganize_hierarchy/system.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/rocking_rod');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/rocking_rod?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/basics/two_mass_oscillator');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/two_mass_oscillator?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/2Dspheres_in_cup');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/2Dspheres_in_cup?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/3Dspheres_in_cup');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/3Dspheres_in_cup?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/cylinder_on_plane');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/cylinder_on_plane?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/dice_cup');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/dice_cup?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/edge_mill');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/edge_mill?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/point_planewithfrustum');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/point_planewithfrustum?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/rolling');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/rolling?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/sphere_on_plane');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/sphere_on_plane?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/tippe_top');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/tippe_top?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/woodpecker_flexible_planar');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/woodpecker_flexible_planar?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/woodpecker_flexible_planar/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/woodpecker_flexible_planar/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/linear_external_ffr_spatial_beam');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/linear_external_ffr_spatial_beam?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/oscillating_ring_planar_POD/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/oscillating_ring_planar_POD/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/oscillating_ring_planar_POD/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/oscillating_ring_planar_POD/system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/pearlchain_cosserat_2D_POD/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/pearlchain_cosserat_2D_POD/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/pearlchain_cosserat_2D_POD/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/pearlchain_cosserat_2D_POD/system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/perlchain');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/perlchain/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/perlchain_cosserat/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain_cosserat/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/perlchain_cosserat/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain_cosserat/system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/perlchain_spatialRCM/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain_spatialRCM/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/main.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/main.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/system.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/system.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/slider_crank_flexible');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/slider_crank_flexible?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/sliding_mass_ffr');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/sliding_mass_ffr?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/spatial_beam_cosserat/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_cosserat/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/spatial_beam_cosserat/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_cosserat/system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/spatial_beam_with_large_deflection');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_with_large_deflection?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/spatial_beam_with_large_deflection/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_with_large_deflection/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/spatial_beam_with_large_deflection/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_with_large_deflection/system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/numerics/nurbsCurve/Makefile');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/numerics/nurbsCurve/Makefile?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/numerics/nurbsCurve/main.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/numerics/nurbsCurve/main.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/numerics/nurbsSurface');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/numerics/nurbsSurface?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/chaintensioner/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/chaintensioner/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/constraints/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/constraints/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/controlled_hydraulic_actuator/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/controlled_hydraulic_actuator/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/crank_mechanism/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/crank_mechanism/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/hierachical_modelling');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/hierachical_modelling?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/hierachical_modelling/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/hierachical_modelling/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/hydraulics_ballcheckvalve/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/hydraulics_ballcheckvalve/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/mbsim_logo/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/mbsim_logo/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/multi_contact/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/multi_contact/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/npendulum_with_joints/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/npendulum_with_joints/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/state_dependent_kinematics_symbolic/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/state_dependent_kinematics_symbolic/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/state_dependent_velocity_constraint/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/state_dependent_velocity_constraint/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/synchronising_pendulums/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/synchronising_pendulums/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xml/time_dependent_kinematics/MBS.mbsimprj.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xml/time_dependent_kinematics/MBS.mbsimprj.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xmlflat/hierachical_modelling/MBS.mbsimprj.flat.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xmlflat/hierachical_modelling/MBS.mbsimprj.flat.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xmlflat/hydraulics_hydmec_minimal/MBS.mbsimprj.flat.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xmlflat/hydraulics_hydmec_minimal/MBS.mbsimprj.flat.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xmlflat/kineticexcitation/MBS.mbsimprj.flat.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xmlflat/kineticexcitation/MBS.mbsimprj.flat.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xmlflat/pendulum_with_joints/MBS.mbsimprj.flat.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xmlflat/pendulum_with_joints/MBS.mbsimprj.flat.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/xmlflat/tippe_top/MBS.mbsimprj.flat.xml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/xmlflat/tippe_top/MBS.mbsimprj.flat.xml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/circle_frustum.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circle_frustum.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/point_contour1s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_contour1s.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contour.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contour.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contour_pdata.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contour_pdata.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/Makefile.am');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/Makefile.am?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/contour1s.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour1s.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/contour1s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour1s.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/contour2s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour2s.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/contour_continuum.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour_continuum.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/edge.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/edge.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/line.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/line.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/point.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/point.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/dynamic_system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/dynamic_system_solver.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system_solver.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/frame.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/frame.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/functions_contact.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions_contact.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/functions_contact.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions_contact.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/nurbs/Makefile.am');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/Makefile.am?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/nurbs/nurbs_curve.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_curve.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/nurbs/nurbs_curve.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_curve.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/nurbs/nurbs_defs.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_defs.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/nurbs/nurbs_surface.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_surface.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/nurbs/nurbs_surface.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_surface.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/single_contact.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/single_contact.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/utils/boost_parameters.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/utils/boost_parameters.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/utils/openmbv_utils.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/utils/openmbv_utils.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/utils/openmbv_utils.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/utils/openmbv_utils.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/utils/ptr.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/utils/ptr.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/function_property.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_property.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/function_property.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_property.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/function_property_factory.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_property_factory.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/function_property_factory.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_property_factory.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/function_widget.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_widget.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/function_widget_factory.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_widget_factory.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/function_widget_factory.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_widget_factory.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/kinematic_functions_properties.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/kinematic_functions_properties.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/kinematic_functions_properties.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/kinematic_functions_properties.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/kinematic_functions_widgets.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/kinematic_functions_widgets.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/kinematic_functions_widgets.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/kinematic_functions_widgets.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/property.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/property.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/torsional_stiffness.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/torsional_stiffness.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimgui/mbsimgui/torsional_stiffness.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/torsional_stiffness.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimxml');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimxml?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimxml/mbsimxml/mbsimproject.xsd');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimxml/mbsimxml/mbsimproject.xsd?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/mbsimxml/xmldoc/getPluginLocation.xsl');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/mbsimxml/xmldoc/getPluginLocation.xsl?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimControl');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimControl?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimElectronics');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimElectronics?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/configure.ac');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/configure.ac?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/Makefile.am');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/Makefile.am?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/Makefile.am');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/Makefile.am?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circlesolid_flexibleband.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circlesolid_flexibleband.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_contour2s.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_contour2s.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_contour2s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_contour2s.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_nurbsdisk2s.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_nurbsdisk2s.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/Makefile.am');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/Makefile.am?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour1s_flexible.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour1s_flexible.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour1s_flexible.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour1s_flexible.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour2s_flexible.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour2s_flexible.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_1s_neutral_factory.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_1s_neutral_factory.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_1s_neutral_factory.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_1s_neutral_factory.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h?r\x3d3297\x26spec\x3dsvn3623');
 
 var selected_path = '/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h';
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/flexible_band.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/flexible_band.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/flexible_band.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/flexible_band.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/neutral_contour');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/neutral_contour?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/Makefile.am');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/Makefile.am?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/Makefile.am');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/Makefile.am?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_cosserat.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_cosserat.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_cosserat.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_cosserat.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_rcm.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_rcm.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_23_bta.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_23_bta.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_cosserat.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_cosserat.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_cosserat.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_cosserat.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_rcm.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_rcm.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_disk.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_disk.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_mfr_mindlin.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_mfr_mindlin.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/node_frame.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/node_frame.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/node_frame.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/node_frame.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/angles.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/angles.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/cardan.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/cardan.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/cardan.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/cardan.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/contact_utils.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/contact_utils.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/revcardan.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/revcardan.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/revcardan.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/revcardan.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimHydraulics');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimPowertrain');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimPowertrain/mbsimPowertrain/cardan_shaft.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain/mbsimPowertrain/cardan_shaft.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimPowertrain/mbsimPowertrain/differential_gear.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain/mbsimPowertrain/differential_gear.cc?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimPowertrain/mbsimPowertrain/differential_gear.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain/mbsimPowertrain/differential_gear.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimPowertrain/mbsimPowertrain/torsional_stiffness.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain/mbsimPowertrain/torsional_stiffness.h?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/thirdparty');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/thirdparty?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/thirdparty/nurbs++');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/thirdparty/nurbs++?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/thirdparty/nurbs++/examples/nurbs/tnurbsS.cpp');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/thirdparty/nurbs++/examples/nurbs/tnurbsS.cpp?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/thirdparty/nurbs++/nurbs/nurbs.cpp');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/thirdparty/nurbs++/nurbs/nurbs.cpp?r\x3d3297\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/thirdparty/nurbs++/nurbs/nurbsS.cpp');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/thirdparty/nurbs++/nurbs/nurbsS.cpp?r\x3d3297\x26spec\x3dsvn3623');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/mbsim-env/source/browse/trunk?r=3297&amp;spec=svn3623"
 
 >/trunk</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples?r=3297&amp;spec=svn3623"
 
 >/trunk/examples</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/control/robot?r=3297&amp;spec=svn3623"
 
 >/trunk/examples/control/robot</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/control/robot/system.cc?r=3297&amp;spec=svn3623"
 
 >...examples/control/robot/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/control/robot/system.h?r=3297&amp;spec=svn3623"
 
 >.../examples/control/robot/system.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/electronics/electrical_circuit?r=3297&amp;spec=svn3623"
 
 >...s/electronics/electrical_circuit</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/2pendulums?r=3297&amp;spec=svn3623"
 
 >...ples/mechanics/basics/2pendulums</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/hierachical_modelling?r=3297&amp;spec=svn3623"
 
 >...ics/basics/hierachical_modelling</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/kinematics_1?r=3297&amp;spec=svn3623"
 
 >...es/mechanics/basics/kinematics_1</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/kinematics_2?r=3297&amp;spec=svn3623"
 
 >...es/mechanics/basics/kinematics_2</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/one_mass_oscillator?r=3297&amp;spec=svn3623"
 
 >...anics/basics/one_mass_oscillator</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/pendulum_with_joints?r=3297&amp;spec=svn3623"
 
 >...nics/basics/pendulum_with_joints</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/pendulum_with_tree_structure?r=3297&amp;spec=svn3623"
 
 >...ics/pendulum_with_tree_structure</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/pendulum_with_tree_structure/system.cc?r=3297&amp;spec=svn3623"
 
 >...um_with_tree_structure/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/pendulum_with_tree_structure/system.h?r=3297&amp;spec=svn3623"
 
 >...lum_with_tree_structure/system.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/reorganize_hierarchy?r=3297&amp;spec=svn3623"
 
 >...nics/basics/reorganize_hierarchy</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/reorganize_hierarchy/system.cc?r=3297&amp;spec=svn3623"
 
 >...s/reorganize_hierarchy/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/reorganize_hierarchy/system.h?r=3297&amp;spec=svn3623"
 
 >...cs/reorganize_hierarchy/system.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/rocking_rod?r=3297&amp;spec=svn3623"
 
 >...les/mechanics/basics/rocking_rod</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/basics/two_mass_oscillator?r=3297&amp;spec=svn3623"
 
 >...anics/basics/two_mass_oscillator</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/2Dspheres_in_cup?r=3297&amp;spec=svn3623"
 
 >...hanics/contacts/2Dspheres_in_cup</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/3Dspheres_in_cup?r=3297&amp;spec=svn3623"
 
 >...hanics/contacts/3Dspheres_in_cup</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/cylinder_on_plane?r=3297&amp;spec=svn3623"
 
 >...anics/contacts/cylinder_on_plane</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/dice_cup?r=3297&amp;spec=svn3623"
 
 >...ples/mechanics/contacts/dice_cup</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/edge_mill?r=3297&amp;spec=svn3623"
 
 >...les/mechanics/contacts/edge_mill</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/point_planewithfrustum?r=3297&amp;spec=svn3623"
 
 >.../contacts/point_planewithfrustum</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/rolling?r=3297&amp;spec=svn3623"
 
 >...mples/mechanics/contacts/rolling</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/sphere_on_plane?r=3297&amp;spec=svn3623"
 
 >...chanics/contacts/sphere_on_plane</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/tippe_top?r=3297&amp;spec=svn3623"
 
 >...les/mechanics/contacts/tippe_top</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/woodpecker_flexible_planar?r=3297&amp;spec=svn3623"
 
 >...tacts/woodpecker_flexible_planar</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/woodpecker_flexible_planar/Makefile?r=3297&amp;spec=svn3623"
 
 >...dpecker_flexible_planar/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/linear_external_ffr_spatial_beam?r=3297&amp;spec=svn3623"
 
 >...linear_external_ffr_spatial_beam</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/oscillating_ring_planar_POD/Makefile?r=3297&amp;spec=svn3623"
 
 >...llating_ring_planar_POD/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/oscillating_ring_planar_POD/system.cc?r=3297&amp;spec=svn3623"
 
 >...lating_ring_planar_POD/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/pearlchain_cosserat_2D_POD/Makefile?r=3297&amp;spec=svn3623"
 
 >...rlchain_cosserat_2D_POD/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/pearlchain_cosserat_2D_POD/system.cc?r=3297&amp;spec=svn3623"
 
 >...lchain_cosserat_2D_POD/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain?r=3297&amp;spec=svn3623"
 
 >...echanics/flexible_body/perlchain</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain/Makefile?r=3297&amp;spec=svn3623"
 
 >...flexible_body/perlchain/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain_cosserat/Makefile?r=3297&amp;spec=svn3623"
 
 >...body/perlchain_cosserat/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain_cosserat/system.cc?r=3297&amp;spec=svn3623"
 
 >...ody/perlchain_cosserat/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain_spatialRCM/Makefile?r=3297&amp;spec=svn3623"
 
 >...dy/perlchain_spatialRCM/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections?r=3297&amp;spec=svn3623"
 
 >...anar_beam_with_large_deflections</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/Makefile?r=3297&amp;spec=svn3623"
 
 >..._with_large_deflections/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/main.cc?r=3297&amp;spec=svn3623"
 
 >...m_with_large_deflections/main.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/system.cc?r=3297&amp;spec=svn3623"
 
 >...with_large_deflections/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/planar_beam_with_large_deflections/system.h?r=3297&amp;spec=svn3623"
 
 >..._with_large_deflections/system.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/slider_crank_flexible?r=3297&amp;spec=svn3623"
 
 >...xible_body/slider_crank_flexible</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/sliding_mass_ffr?r=3297&amp;spec=svn3623"
 
 >...s/flexible_body/sliding_mass_ffr</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_cosserat/Makefile?r=3297&amp;spec=svn3623"
 
 >...y/spatial_beam_cosserat/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_cosserat/system.cc?r=3297&amp;spec=svn3623"
 
 >.../spatial_beam_cosserat/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_with_large_deflection?r=3297&amp;spec=svn3623"
 
 >...atial_beam_with_large_deflection</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_with_large_deflection/Makefile?r=3297&amp;spec=svn3623"
 
 >...m_with_large_deflection/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/spatial_beam_with_large_deflection/system.cc?r=3297&amp;spec=svn3623"
 
 >..._with_large_deflection/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/numerics/nurbsCurve/Makefile?r=3297&amp;spec=svn3623"
 
 >...les/numerics/nurbsCurve/Makefile</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/numerics/nurbsCurve/main.cc?r=3297&amp;spec=svn3623"
 
 >...ples/numerics/nurbsCurve/main.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/numerics/nurbsSurface?r=3297&amp;spec=svn3623"
 
 >...k/examples/numerics/nurbsSurface</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/chaintensioner/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >.../chaintensioner/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/constraints/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...xml/constraints/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/controlled_hydraulic_actuator/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...raulic_actuator/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/crank_mechanism/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...crank_mechanism/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/hierachical_modelling?r=3297&amp;spec=svn3623"
 
 >...amples/xml/hierachical_modelling</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/hierachical_modelling/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...hical_modelling/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/hydraulics_ballcheckvalve/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >..._ballcheckvalve/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/mbsim_logo/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >.../xml/mbsim_logo/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/multi_contact/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...l/multi_contact/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/npendulum_with_joints/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...lum_with_joints/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/state_dependent_kinematics_symbolic/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...matics_symbolic/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/state_dependent_velocity_constraint/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...city_constraint/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/synchronising_pendulums/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...ising_pendulums/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xml/time_dependent_kinematics/MBS.mbsimprj.xml?r=3297&amp;spec=svn3623"
 
 >...dent_kinematics/MBS.mbsimprj.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xmlflat/hierachical_modelling/MBS.mbsimprj.flat.xml?r=3297&amp;spec=svn3623"
 
 >..._modelling/MBS.mbsimprj.flat.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xmlflat/hydraulics_hydmec_minimal/MBS.mbsimprj.flat.xml?r=3297&amp;spec=svn3623"
 
 >...ec_minimal/MBS.mbsimprj.flat.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xmlflat/kineticexcitation/MBS.mbsimprj.flat.xml?r=3297&amp;spec=svn3623"
 
 >...excitation/MBS.mbsimprj.flat.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xmlflat/pendulum_with_joints/MBS.mbsimprj.flat.xml?r=3297&amp;spec=svn3623"
 
 >...ith_joints/MBS.mbsimprj.flat.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/xmlflat/tippe_top/MBS.mbsimprj.flat.xml?r=3297&amp;spec=svn3623"
 
 >.../tippe_top/MBS.mbsimprj.flat.xml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel?r=3297&amp;spec=svn3623"
 
 >/trunk/kernel</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics?r=3297&amp;spec=svn3623"
 
 >.../kernel/mbsim/contact_kinematics</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circle_frustum.cc?r=3297&amp;spec=svn3623"
 
 >...act_kinematics/circle_frustum.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_contour1s.h?r=3297&amp;spec=svn3623"
 
 >...act_kinematics/point_contour1s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contour.h?r=3297&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/contour.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contour_pdata.h?r=3297&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/contour_pdata.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/Makefile.am?r=3297&amp;spec=svn3623"
 
 >...ernel/mbsim/contours/Makefile.am</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour1s.cc?r=3297&amp;spec=svn3623"
 
 >...rnel/mbsim/contours/contour1s.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour1s.h?r=3297&amp;spec=svn3623"
 
 >...ernel/mbsim/contours/contour1s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour2s.h?r=3297&amp;spec=svn3623"
 
 >...ernel/mbsim/contours/contour2s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour_continuum.h?r=3297&amp;spec=svn3623"
 
 >...sim/contours/contour_continuum.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/edge.cc?r=3297&amp;spec=svn3623"
 
 >...nk/kernel/mbsim/contours/edge.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/line.cc?r=3297&amp;spec=svn3623"
 
 >...nk/kernel/mbsim/contours/line.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/point.cc?r=3297&amp;spec=svn3623"
 
 >...k/kernel/mbsim/contours/point.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system.cc?r=3297&amp;spec=svn3623"
 
 >...k/kernel/mbsim/dynamic_system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system_solver.cc?r=3297&amp;spec=svn3623"
 
 >...l/mbsim/dynamic_system_solver.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/frame.h?r=3297&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/frame.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions_contact.cc?r=3297&amp;spec=svn3623"
 
 >...ernel/mbsim/functions_contact.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions_contact.h?r=3297&amp;spec=svn3623"
 
 >...kernel/mbsim/functions_contact.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/Makefile.am?r=3297&amp;spec=svn3623"
 
 >...mbsim/numerics/nurbs/Makefile.am</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_curve.cc?r=3297&amp;spec=svn3623"
 
 >...im/numerics/nurbs/nurbs_curve.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_curve.h?r=3297&amp;spec=svn3623"
 
 >...sim/numerics/nurbs/nurbs_curve.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_defs.h?r=3297&amp;spec=svn3623"
 
 >...bsim/numerics/nurbs/nurbs_defs.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_surface.cc?r=3297&amp;spec=svn3623"
 
 >.../numerics/nurbs/nurbs_surface.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_surface.h?r=3297&amp;spec=svn3623"
 
 >...m/numerics/nurbs/nurbs_surface.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/single_contact.cc?r=3297&amp;spec=svn3623"
 
 >...k/kernel/mbsim/single_contact.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/utils/boost_parameters.h?r=3297&amp;spec=svn3623"
 
 >...l/mbsim/utils/boost_parameters.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/utils/openmbv_utils.cc?r=3297&amp;spec=svn3623"
 
 >...nel/mbsim/utils/openmbv_utils.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/utils/openmbv_utils.h?r=3297&amp;spec=svn3623"
 
 >...rnel/mbsim/utils/openmbv_utils.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/utils/ptr.h?r=3297&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/utils/ptr.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui?r=3297&amp;spec=svn3623"
 
 >/trunk/mbsimgui</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_property.cc?r=3297&amp;spec=svn3623"
 
 >...ui/mbsimgui/function_property.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_property.h?r=3297&amp;spec=svn3623"
 
 >...gui/mbsimgui/function_property.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_property_factory.cc?r=3297&amp;spec=svn3623"
 
 >...gui/function_property_factory.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_property_factory.h?r=3297&amp;spec=svn3623"
 
 >...mgui/function_property_factory.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_widget.h?r=3297&amp;spec=svn3623"
 
 >...imgui/mbsimgui/function_widget.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_widget_factory.cc?r=3297&amp;spec=svn3623"
 
 >...imgui/function_widget_factory.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/function_widget_factory.h?r=3297&amp;spec=svn3623"
 
 >...simgui/function_widget_factory.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/kinematic_functions_properties.cc?r=3297&amp;spec=svn3623"
 
 >...inematic_functions_properties.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/kinematic_functions_properties.h?r=3297&amp;spec=svn3623"
 
 >...kinematic_functions_properties.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/kinematic_functions_widgets.cc?r=3297&amp;spec=svn3623"
 
 >...i/kinematic_functions_widgets.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/kinematic_functions_widgets.h?r=3297&amp;spec=svn3623"
 
 >...ui/kinematic_functions_widgets.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/property.cc?r=3297&amp;spec=svn3623"
 
 >...nk/mbsimgui/mbsimgui/property.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/torsional_stiffness.cc?r=3297&amp;spec=svn3623"
 
 >.../mbsimgui/torsional_stiffness.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimgui/mbsimgui/torsional_stiffness.h?r=3297&amp;spec=svn3623"
 
 >...i/mbsimgui/torsional_stiffness.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimxml?r=3297&amp;spec=svn3623"
 
 >/trunk/mbsimxml</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimxml/mbsimxml/mbsimproject.xsd?r=3297&amp;spec=svn3623"
 
 >...simxml/mbsimxml/mbsimproject.xsd</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/mbsimxml/xmldoc/getPluginLocation.xsl?r=3297&amp;spec=svn3623"
 
 >...xml/xmldoc/getPluginLocation.xsl</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules?r=3297&amp;spec=svn3623"
 
 >/trunk/modules</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimControl?r=3297&amp;spec=svn3623"
 
 >/trunk/modules/mbsimControl</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimElectronics?r=3297&amp;spec=svn3623"
 
 >/trunk/modules/mbsimElectronics</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody?r=3297&amp;spec=svn3623"
 
 >/trunk/modules/mbsimFlexibleBody</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/configure.ac?r=3297&amp;spec=svn3623"
 
 >...s/mbsimFlexibleBody/configure.ac</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/Makefile.am?r=3297&amp;spec=svn3623"
 
 >...dy/mbsimFlexibleBody/Makefile.am</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/Makefile.am?r=3297&amp;spec=svn3623"
 
 >...y/contact_kinematics/Makefile.am</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circlesolid_flexibleband.cc?r=3297&amp;spec=svn3623"
 
 >...tics/circlesolid_flexibleband.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_contour2s.cc?r=3297&amp;spec=svn3623"
 
 >...ct_kinematics/point_contour2s.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_contour2s.h?r=3297&amp;spec=svn3623"
 
 >...act_kinematics/point_contour2s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_nurbsdisk2s.cc?r=3297&amp;spec=svn3623"
 
 >..._kinematics/point_nurbsdisk2s.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/Makefile.am?r=3297&amp;spec=svn3623"
 
 >...lexibleBody/contours/Makefile.am</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour1s_flexible.cc?r=3297&amp;spec=svn3623"
 
 >...y/contours/contour1s_flexible.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour1s_flexible.h?r=3297&amp;spec=svn3623"
 
 >...dy/contours/contour1s_flexible.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour2s_flexible.h?r=3297&amp;spec=svn3623"
 
 >...dy/contours/contour2s_flexible.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_1s_neutral_factory.cc?r=3297&amp;spec=svn3623"
 
 >...rs/contour_1s_neutral_factory.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_1s_neutral_factory.h?r=3297&amp;spec=svn3623"
 
 >...urs/contour_1s_neutral_factory.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h?r=3297&amp;spec=svn3623"
 selected="selected"
 >...urs/contour_2s_neutral_factory.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/flexible_band.cc?r=3297&amp;spec=svn3623"
 
 >...leBody/contours/flexible_band.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/flexible_band.h?r=3297&amp;spec=svn3623"
 
 >...bleBody/contours/flexible_band.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/neutral_contour?r=3297&amp;spec=svn3623"
 
 >...bleBody/contours/neutral_contour</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.cc?r=3297&amp;spec=svn3623"
 
 >...simFlexibleBody/flexible_body.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.h?r=3297&amp;spec=svn3623"
 
 >...bsimFlexibleBody/flexible_body.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/Makefile.am?r=3297&amp;spec=svn3623"
 
 >...leBody/flexible_body/Makefile.am</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/Makefile.am?r=3297&amp;spec=svn3623"
 
 >...body/finite_elements/Makefile.am</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.cc?r=3297&amp;spec=svn3623"
 
 >...t_linear_external_lumped_node.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h?r=3297&amp;spec=svn3623"
 
 >...nt_linear_external_lumped_node.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_cosserat.cc?r=3297&amp;spec=svn3623"
 
 >.../flexible_body_1s_21_cosserat.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_cosserat.h?r=3297&amp;spec=svn3623"
 
 >...y/flexible_body_1s_21_cosserat.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_rcm.cc?r=3297&amp;spec=svn3623"
 
 >..._body/flexible_body_1s_21_rcm.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_23_bta.cc?r=3297&amp;spec=svn3623"
 
 >..._body/flexible_body_1s_23_bta.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_cosserat.cc?r=3297&amp;spec=svn3623"
 
 >.../flexible_body_1s_33_cosserat.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_cosserat.h?r=3297&amp;spec=svn3623"
 
 >...y/flexible_body_1s_33_cosserat.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_rcm.cc?r=3297&amp;spec=svn3623"
 
 >..._body/flexible_body_1s_33_rcm.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.cc?r=3297&amp;spec=svn3623"
 
 >...ody/flexible_body_1s_cosserat.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.h?r=3297&amp;spec=svn3623"
 
 >...body/flexible_body_1s_cosserat.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_disk.cc?r=3297&amp;spec=svn3623"
 
 >...body/flexible_body_2s_13_disk.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_mfr_mindlin.cc?r=3297&amp;spec=svn3623"
 
 >...exible_body_2s_13_mfr_mindlin.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.cc?r=3297&amp;spec=svn3623"
 
 >...ible_body_linear_external_ffr.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h?r=3297&amp;spec=svn3623"
 
 >...xible_body_linear_external_ffr.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/node_frame.cc?r=3297&amp;spec=svn3623"
 
 >.../mbsimFlexibleBody/node_frame.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/node_frame.h?r=3297&amp;spec=svn3623"
 
 >...y/mbsimFlexibleBody/node_frame.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/angles.h?r=3297&amp;spec=svn3623"
 
 >...mbsimFlexibleBody/utils/angles.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/cardan.cc?r=3297&amp;spec=svn3623"
 
 >...bsimFlexibleBody/utils/cardan.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/cardan.h?r=3297&amp;spec=svn3623"
 
 >...mbsimFlexibleBody/utils/cardan.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/contact_utils.cc?r=3297&amp;spec=svn3623"
 
 >...xibleBody/utils/contact_utils.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/revcardan.cc?r=3297&amp;spec=svn3623"
 
 >...mFlexibleBody/utils/revcardan.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/utils/revcardan.h?r=3297&amp;spec=svn3623"
 
 >...imFlexibleBody/utils/revcardan.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics?r=3297&amp;spec=svn3623"
 
 >/trunk/modules/mbsimHydraulics</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain?r=3297&amp;spec=svn3623"
 
 >/trunk/modules/mbsimPowertrain</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain/mbsimPowertrain/cardan_shaft.h?r=3297&amp;spec=svn3623"
 
 >...n/mbsimPowertrain/cardan_shaft.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain/mbsimPowertrain/differential_gear.cc?r=3297&amp;spec=svn3623"
 
 >...mPowertrain/differential_gear.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain/mbsimPowertrain/differential_gear.h?r=3297&amp;spec=svn3623"
 
 >...imPowertrain/differential_gear.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimPowertrain/mbsimPowertrain/torsional_stiffness.h?r=3297&amp;spec=svn3623"
 
 >...Powertrain/torsional_stiffness.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/thirdparty?r=3297&amp;spec=svn3623"
 
 >/trunk/thirdparty</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/thirdparty/nurbs++?r=3297&amp;spec=svn3623"
 
 >/trunk/thirdparty/nurbs++</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/thirdparty/nurbs++/examples/nurbs/tnurbsS.cpp?r=3297&amp;spec=svn3623"
 
 >...rbs++/examples/nurbs/tnurbsS.cpp</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/thirdparty/nurbs++/nurbs/nurbs.cpp?r=3297&amp;spec=svn3623"
 
 >...irdparty/nurbs++/nurbs/nurbs.cpp</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/thirdparty/nurbs++/nurbs/nurbsS.cpp?r=3297&amp;spec=svn3623"
 
 >...rdparty/nurbs++/nurbs/nurbsS.cpp</option>
 
 </select>
 </td></tr></table>
 
 
 



 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/mbsim-env/source/detail?spec=svn3623&r=3259">r3259</a>
 by kgrundl
 on Jun 21, 2014
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=3259&amp;format=side&amp;path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h&amp;old_path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h&amp;old=3014">Diff</a>
 <br>
 <pre class="ifOpened">- catching up to current trunk
- all examples show the same results
except the cosserat-examples, as the
interpolation has been changed (should
be more exact and faster now)
...</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/mbsim-env/source/detail?spec=svn3623&r=3014">r3014</a>
 by kgrundl
 on Mar 2, 2014
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=3014&amp;format=side&amp;path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h&amp;old_path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h&amp;old=2864">Diff</a>
 <br>
 <pre class="ifOpened">- merging with trunk of 4.0.0
- enabling spineExtrusion for
Contour1s bodies (not only special
bodies...)
- refining structure for contours
...</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/mbsim-env/source/detail?spec=svn3623&r=2864">r2864</a>
 by kgrundl
 on Dec 19, 2013
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=2864&amp;format=side&amp;path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h&amp;old_path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h&amp;old=">Diff</a>
 <br>
 <pre class="ifOpened">committing first version of the FFR
examples using a nurbs interpolation
for the contours. The input files for
the FFR examples are not distributed.</pre>
 </div>
 
 
 <a href="/p/mbsim-env/source/list?path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h&start=3297">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 1759 bytes,
 40 lines</div>
 
 <div><a href="//mbsim-env.googlecode.com/svn/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="https://ssl.gstatic.com/codesite/ph/1729405847801014513/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="https://ssl.gstatic.com/codesite/ph/1729405847801014513/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/1729405847801014513/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 </script>
<script src="https://ssl.gstatic.com/codesite/ph/1729405847801014513/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn3623': '/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/contour_2s_neutral_factory.h'}
 codereviews = CR_controller.setup(
 {"loggedInUserEmail": "wangzhanrock@gmail.com", "projectName": "mbsim-env", "profileUrl": "/u/117234204990931991355/", "projectHomeUrl": "/p/mbsim-env", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/1729405847801014513", "relativeBaseUrl": "", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "domainName": null, "token": "ABZ6GAeK2WaRq0X5mFBaDlyA29AE0axgaQ:1420558294999"}, '', 'svn3623', paths,
 CR_BrowseIntegrationFactory);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/1729405847801014513/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="https://ssl.gstatic.com/codesite/ph/1729405847801014513/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>

