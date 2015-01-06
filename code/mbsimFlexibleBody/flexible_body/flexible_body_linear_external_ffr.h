



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "ABZ6GAfZ6bnNU7uwjOJbCs3Xmq3zyz6Dpw:1420558503592";
 
 
 var CS_env = {"loggedInUserEmail": "wangzhanrock@gmail.com", "projectHomeUrl": "/p/mbsim-env", "relativeBaseUrl": "", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "domainName": null, "profileUrl": "/u/117234204990931991355/", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/1729405847801014513", "token": "ABZ6GAfZ6bnNU7uwjOJbCs3Xmq3zyz6Dpw:1420558503592", "projectName": "mbsim-env"};
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
 
 
 <title>flexible_body_linear_external_ffr.h - 
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
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Fmbsim-env%2Fsource%2Fbrowse%2Ftrunk%2Fmodules%2FmbsimFlexibleBody%2FmbsimFlexibleBody%2Fflexible_body%2Fflexible_body_linear_external_ffr.h" 
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
 <span id="crumb_links" class="ifClosed"><a href="/p/mbsim-env/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/">modules</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/">mbsimFlexibleBody</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/">mbsimFlexibleBody</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/">flexible_body</a><span class="sp">/&nbsp;</span>flexible_body_linear_external_ffr.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h?r=3297" title="Previous">&lsaquo;r3297</a></li>
 
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
><tr id="gr_svn3623_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn3623_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn3623_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn3623_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn3623_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn3623_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn3623_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn3623_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn3623_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn3623_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn3623_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn3623_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn3623_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn3623_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn3623_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn3623_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn3623_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn3623_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn3623_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn3623_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn3623_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn3623_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn3623_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn3623_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn3623_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn3623_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn3623_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn3623_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn3623_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn3623_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn3623_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn3623_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn3623_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn3623_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn3623_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn3623_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn3623_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn3623_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn3623_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn3623_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn3623_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn3623_82"

><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn3623_83"

><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn3623_84"

><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn3623_85"

><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn3623_86"

><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn3623_87"

><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn3623_88"

><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn3623_89"

><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn3623_90"

><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn3623_91"

><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn3623_92"

><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn3623_93"

><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn3623_94"

><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn3623_95"

><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn3623_96"

><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn3623_97"

><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn3623_98"

><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn3623_99"

><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn3623_100"

><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn3623_101"

><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn3623_102"

><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn3623_103"

><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn3623_104"

><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn3623_105"

><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn3623_106"

><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn3623_107"

><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn3623_108"

><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn3623_109"

><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn3623_110"

><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn3623_111"

><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn3623_112"

><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn3623_113"

><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn3623_114"

><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn3623_115"

><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn3623_116"

><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn3623_117"

><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn3623_118"

><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn3623_119"

><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn3623_120"

><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn3623_121"

><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn3623_122"

><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn3623_123"

><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn3623_124"

><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn3623_125"

><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn3623_126"

><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn3623_127"

><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn3623_128"

><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn3623_129"

><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn3623_130"

><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn3623_131"

><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn3623_132"

><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn3623_133"

><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn3623_134"

><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn3623_135"

><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn3623_136"

><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn3623_137"

><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn3623_138"

><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn3623_139"

><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn3623_140"

><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn3623_141"

><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn3623_142"

><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn3623_143"

><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn3623_144"

><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn3623_145"

><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn3623_146"

><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn3623_147"

><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn3623_148"

><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn3623_149"

><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn3623_150"

><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn3623_151"

><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn3623_152"

><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn3623_153"

><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn3623_154"

><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn3623_155"

><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn3623_156"

><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn3623_157"

><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn3623_158"

><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn3623_159"

><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn3623_160"

><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn3623_161"

><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn3623_162"

><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn3623_163"

><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn3623_164"

><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn3623_165"

><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn3623_166"

><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn3623_167"

><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn3623_168"

><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn3623_169"

><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn3623_170"

><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn3623_171"

><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn3623_172"

><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn3623_173"

><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn3623_174"

><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn3623_175"

><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn3623_176"

><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn3623_177"

><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn3623_178"

><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn3623_179"

><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn3623_180"

><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn3623_181"

><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn3623_182"

><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn3623_183"

><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn3623_184"

><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn3623_185"

><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn3623_186"

><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn3623_187"

><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn3623_188"

><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn3623_189"

><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn3623_190"

><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn3623_191"

><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn3623_192"

><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn3623_193"

><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn3623_194"

><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn3623_195"

><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn3623_196"

><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn3623_197"

><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn3623_198"

><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn3623_199"

><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn3623_200"

><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn3623_201"

><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn3623_202"

><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn3623_203"

><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn3623_204"

><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn3623_205"

><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn3623_206"

><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn3623_207"

><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn3623_208"

><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn3623_209"

><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn3623_210"

><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn3623_211"

><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn3623_212"

><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn3623_213"

><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn3623_214"

><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn3623_215"

><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn3623_216"

><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn3623_217"

><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn3623_218"

><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn3623_219"

><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn3623_220"

><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn3623_221"

><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn3623_222"

><td id="222"><a href="#222">222</a></td></tr
><tr id="gr_svn3623_223"

><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn3623_224"

><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn3623_225"

><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn3623_226"

><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn3623_227"

><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn3623_228"

><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn3623_229"

><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn3623_230"

><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn3623_231"

><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn3623_232"

><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn3623_233"

><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn3623_234"

><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn3623_235"

><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn3623_236"

><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn3623_237"

><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn3623_238"

><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn3623_239"

><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn3623_240"

><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn3623_241"

><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn3623_242"

><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn3623_243"

><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn3623_244"

><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn3623_245"

><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn3623_246"

><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn3623_247"

><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn3623_248"

><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn3623_249"

><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn3623_250"

><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn3623_251"

><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn3623_252"

><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn3623_253"

><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn3623_254"

><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn3623_255"

><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn3623_256"

><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn3623_257"

><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn3623_258"

><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn3623_259"

><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn3623_260"

><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn3623_261"

><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn3623_262"

><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn3623_263"

><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn3623_264"

><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn3623_265"

><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn3623_266"

><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn3623_267"

><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn3623_268"

><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn3623_269"

><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn3623_270"

><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn3623_271"

><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn3623_272"

><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn3623_273"

><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn3623_274"

><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn3623_275"

><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn3623_276"

><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn3623_277"

><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn3623_278"

><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn3623_279"

><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn3623_280"

><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn3623_281"

><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn3623_282"

><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn3623_283"

><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn3623_284"

><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn3623_285"

><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn3623_286"

><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn3623_287"

><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn3623_288"

><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn3623_289"

><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn3623_290"

><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn3623_291"

><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn3623_292"

><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn3623_293"

><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn3623_294"

><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn3623_295"

><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn3623_296"

><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn3623_297"

><td id="297"><a href="#297">297</a></td></tr
><tr id="gr_svn3623_298"

><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn3623_299"

><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn3623_300"

><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn3623_301"

><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn3623_302"

><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn3623_303"

><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn3623_304"

><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn3623_305"

><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn3623_306"

><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn3623_307"

><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn3623_308"

><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn3623_309"

><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn3623_310"

><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn3623_311"

><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn3623_312"

><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn3623_313"

><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn3623_314"

><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn3623_315"

><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn3623_316"

><td id="316"><a href="#316">316</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn3623_1

><td class="source">/* Copyright (C) 2004-2011 MBSim Development Team<br></td></tr
><tr
id=sl_svn3623_2

><td class="source"> *<br></td></tr
><tr
id=sl_svn3623_3

><td class="source"> * This library is free software; you can redistribute it and/or <br></td></tr
><tr
id=sl_svn3623_4

><td class="source"> * modify it under the terms of the GNU Lesser General Public <br></td></tr
><tr
id=sl_svn3623_5

><td class="source"> * License as published by the Free Software Foundation; either <br></td></tr
><tr
id=sl_svn3623_6

><td class="source"> * version 2.1 of the License, or (at your option) any later version. <br></td></tr
><tr
id=sl_svn3623_7

><td class="source"> *  <br></td></tr
><tr
id=sl_svn3623_8

><td class="source"> * This library is distributed in the hope that it will be useful, <br></td></tr
><tr
id=sl_svn3623_9

><td class="source"> * but WITHOUT ANY WARRANTY; without even the implied warranty of <br></td></tr
><tr
id=sl_svn3623_10

><td class="source"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU <br></td></tr
><tr
id=sl_svn3623_11

><td class="source"> * Lesser General Public License for more details. <br></td></tr
><tr
id=sl_svn3623_12

><td class="source"> *  <br></td></tr
><tr
id=sl_svn3623_13

><td class="source"> * You should have received a copy of the GNU Lesser General Public <br></td></tr
><tr
id=sl_svn3623_14

><td class="source"> * License along with this library; if not, write to the Free Software <br></td></tr
><tr
id=sl_svn3623_15

><td class="source"> * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA<br></td></tr
><tr
id=sl_svn3623_16

><td class="source"> *<br></td></tr
><tr
id=sl_svn3623_17

><td class="source"> * Contact: thorsten.schindler@mytum.de<br></td></tr
><tr
id=sl_svn3623_18

><td class="source"> */<br></td></tr
><tr
id=sl_svn3623_19

><td class="source"><br></td></tr
><tr
id=sl_svn3623_20

><td class="source">#ifndef _FLEXIBLE_BODY_LINEAR_EXTERNAL_FFR_H_<br></td></tr
><tr
id=sl_svn3623_21

><td class="source">#define _FLEXIBLE_BODY_LINEAR_EXTERNAL_FFR_H_<br></td></tr
><tr
id=sl_svn3623_22

><td class="source"><br></td></tr
><tr
id=sl_svn3623_23

><td class="source">#include &lt;iostream&gt;<br></td></tr
><tr
id=sl_svn3623_24

><td class="source">#include &lt;fstream&gt;<br></td></tr
><tr
id=sl_svn3623_25

><td class="source">#include &lt;sstream&gt;<br></td></tr
><tr
id=sl_svn3623_26

><td class="source">#include &lt;string&gt;<br></td></tr
><tr
id=sl_svn3623_27

><td class="source">#include &lt;stdlib.h&gt;<br></td></tr
><tr
id=sl_svn3623_28

><td class="source"><br></td></tr
><tr
id=sl_svn3623_29

><td class="source">#include &quot;mbsim/mbsim_event.h&quot;<br></td></tr
><tr
id=sl_svn3623_30

><td class="source"><br></td></tr
><tr
id=sl_svn3623_31

><td class="source">#include &lt;mbsim/frame.h&gt;<br></td></tr
><tr
id=sl_svn3623_32

><td class="source"><br></td></tr
><tr
id=sl_svn3623_33

><td class="source">#include &quot;mbsimFlexibleBody/flexible_body.h&quot;<br></td></tr
><tr
id=sl_svn3623_34

><td class="source">#include &quot;mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h&quot;<br></td></tr
><tr
id=sl_svn3623_35

><td class="source"><br></td></tr
><tr
id=sl_svn3623_36

><td class="source">#include &lt;mbsimFlexibleBody/node_frame.h&gt;<br></td></tr
><tr
id=sl_svn3623_37

><td class="source"><br></td></tr
><tr
id=sl_svn3623_38

><td class="source">//namespace unitTest{<br></td></tr
><tr
id=sl_svn3623_39

><td class="source">//  class linearExternalFFRTest;<br></td></tr
><tr
id=sl_svn3623_40

><td class="source">//}<br></td></tr
><tr
id=sl_svn3623_41

><td class="source"><br></td></tr
><tr
id=sl_svn3623_42

><td class="source">namespace MBSimFlexibleBody {<br></td></tr
><tr
id=sl_svn3623_43

><td class="source">  <br></td></tr
><tr
id=sl_svn3623_44

><td class="source">  /*! <br></td></tr
><tr
id=sl_svn3623_45

><td class="source">   * \brief flexible body model based on floating frame reference using the system information external linear FEM code<br></td></tr
><tr
id=sl_svn3623_46

><td class="source">   * \author Kilian Grundl<br></td></tr
><tr
id=sl_svn3623_47

><td class="source">   * \author Zhan Wang<br></td></tr
><tr
id=sl_svn3623_48

><td class="source">   * \date<br></td></tr
><tr
id=sl_svn3623_49

><td class="source">   */<br></td></tr
><tr
id=sl_svn3623_50

><td class="source">  class FlexibleBodyLinearExternalFFR : public FlexibleBodyContinuum&lt;fmatvec::Vec&gt; /*, public FlexibleContourBody */{<br></td></tr
><tr
id=sl_svn3623_51

><td class="source">    public:<br></td></tr
><tr
id=sl_svn3623_52

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_53

><td class="source">       * \brief constructor<br></td></tr
><tr
id=sl_svn3623_54

><td class="source">       * \param name of body<br></td></tr
><tr
id=sl_svn3623_55

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_56

><td class="source">      FlexibleBodyLinearExternalFFR(const std::string &amp;name, const bool &amp;DEBUG_);<br></td></tr
><tr
id=sl_svn3623_57

><td class="source"><br></td></tr
><tr
id=sl_svn3623_58

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_59

><td class="source">       * \brief destructor<br></td></tr
><tr
id=sl_svn3623_60

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_61

><td class="source">      virtual ~FlexibleBodyLinearExternalFFR();<br></td></tr
><tr
id=sl_svn3623_62

><td class="source"><br></td></tr
><tr
id=sl_svn3623_63

><td class="source">      /* INHERITED INTERFACE OF FLEIBLE BODY CONTOUR */<br></td></tr
><tr
id=sl_svn3623_64

><td class="source">      virtual int getNumberElements() const;<br></td></tr
><tr
id=sl_svn3623_65

><td class="source">      virtual double getLength() const;<br></td></tr
><tr
id=sl_svn3623_66

><td class="source">      virtual bool isOpenStructure() const;<br></td></tr
><tr
id=sl_svn3623_67

><td class="source">      /***************************************************/<br></td></tr
><tr
id=sl_svn3623_68

><td class="source"><br></td></tr
><tr
id=sl_svn3623_69

><td class="source">      /* INHERITED INTERFACE OF FLEXIBLE BODY CONTINUUM */<br></td></tr
><tr
id=sl_svn3623_70

><td class="source">      using FlexibleBodyContinuum&lt;fmatvec::Vec&gt;::addFrame;<br></td></tr
><tr
id=sl_svn3623_71

><td class="source">      /***************************************************/<br></td></tr
><tr
id=sl_svn3623_72

><td class="source"><br></td></tr
><tr
id=sl_svn3623_73

><td class="source">      /* INHERITED INTERFACE OF OBJECTINTERFACE */<br></td></tr
><tr
id=sl_svn3623_74

><td class="source">      virtual void updateM(double t, int k = 0);<br></td></tr
><tr
id=sl_svn3623_75

><td class="source">      /***************************************************/<br></td></tr
><tr
id=sl_svn3623_76

><td class="source"><br></td></tr
><tr
id=sl_svn3623_77

><td class="source">      /* INHERITED INTERFACE OF FLEXIBLE BODY */<br></td></tr
><tr
id=sl_svn3623_78

><td class="source">      virtual void BuildElements();<br></td></tr
><tr
id=sl_svn3623_79

><td class="source">      virtual void GlobalVectorContribution(int CurrentElement, const fmatvec::Vec&amp; locVec, fmatvec::Vec&amp; gloVec);<br></td></tr
><tr
id=sl_svn3623_80

><td class="source">      virtual void GlobalMatrixContribution(int CurrentElement, const fmatvec::Mat&amp; locMat, fmatvec::Mat&amp; gloMat);<br></td></tr
><tr
id=sl_svn3623_81

><td class="source">      virtual void GlobalMatrixContribution(int CurrentElement, const fmatvec::SymMat&amp; locMat, fmatvec::SymMat&amp; gloMat);<br></td></tr
><tr
id=sl_svn3623_82

><td class="source">      virtual void updateKinematicsForFrame(MBSim::ContourPointData &amp;cp, MBSim::Frame::Feature ff, MBSim::Frame *frame = 0);<br></td></tr
><tr
id=sl_svn3623_83

><td class="source">      virtual void updateKinematicsAtNode(NodeFrame *frame, MBSim::Frame::Feature ff);<br></td></tr
><tr
id=sl_svn3623_84

><td class="source">      virtual void updateJacobiansAtNode(NodeFrame * frame);<br></td></tr
><tr
id=sl_svn3623_85

><td class="source">      virtual void updateJacobiansForFrame(MBSim::ContourPointData &amp;data, MBSim::Frame *frame = 0);<br></td></tr
><tr
id=sl_svn3623_86

><td class="source">      virtual void updateh(double t, int k = 0);<br></td></tr
><tr
id=sl_svn3623_87

><td class="source">      virtual void updateStateDependentVariables(double t);<br></td></tr
><tr
id=sl_svn3623_88

><td class="source">      virtual void updateJacobians(double t, int k);<br></td></tr
><tr
id=sl_svn3623_89

><td class="source">      /***************************************************/<br></td></tr
><tr
id=sl_svn3623_90

><td class="source"><br></td></tr
><tr
id=sl_svn3623_91

><td class="source">      /* INHERITED INTERFACE OF OBJECT */<br></td></tr
><tr
id=sl_svn3623_92

><td class="source">      virtual void init(InitStage stage);<br></td></tr
><tr
id=sl_svn3623_93

><td class="source">      virtual void calcqSize();<br></td></tr
><tr
id=sl_svn3623_94

><td class="source">      virtual void calcuSize(int j);<br></td></tr
><tr
id=sl_svn3623_95

><td class="source">      /***************************************************/<br></td></tr
><tr
id=sl_svn3623_96

><td class="source"><br></td></tr
><tr
id=sl_svn3623_97

><td class="source">      /* INHERITED INTERFACE OF ELEMENT */<br></td></tr
><tr
id=sl_svn3623_98

><td class="source">      virtual std::string getType() const {<br></td></tr
><tr
id=sl_svn3623_99

><td class="source">        return &quot;FlexibleBodyLinearExternalFFR&quot;;<br></td></tr
><tr
id=sl_svn3623_100

><td class="source">      }<br></td></tr
><tr
id=sl_svn3623_101

><td class="source">      /***************************************************/<br></td></tr
><tr
id=sl_svn3623_102

><td class="source"><br></td></tr
><tr
id=sl_svn3623_103

><td class="source">      /* GETTER AND SETTER */<br></td></tr
><tr
id=sl_svn3623_104

><td class="source">      void setNumberOfModes(int nf_) {<br></td></tr
><tr
id=sl_svn3623_105

><td class="source">        nf = nf_;<br></td></tr
><tr
id=sl_svn3623_106

><td class="source">      }<br></td></tr
><tr
id=sl_svn3623_107

><td class="source"><br></td></tr
><tr
id=sl_svn3623_108

><td class="source">      int getNumberModes() const {<br></td></tr
><tr
id=sl_svn3623_109

><td class="source">        return nf;<br></td></tr
><tr
id=sl_svn3623_110

><td class="source">      }<br></td></tr
><tr
id=sl_svn3623_111

><td class="source"><br></td></tr
><tr
id=sl_svn3623_112

><td class="source">      MBSim::Frame * getFloatingFrameOfReference() {<br></td></tr
><tr
id=sl_svn3623_113

><td class="source">        return FFR;<br></td></tr
><tr
id=sl_svn3623_114

><td class="source">      }<br></td></tr
><tr
id=sl_svn3623_115

><td class="source"><br></td></tr
><tr
id=sl_svn3623_116

><td class="source">      const fmatvec::SqrMat3&amp; getOrientationOfFFR() const {<br></td></tr
><tr
id=sl_svn3623_117

><td class="source">        return A;<br></td></tr
><tr
id=sl_svn3623_118

><td class="source">      }<br></td></tr
><tr
id=sl_svn3623_119

><td class="source"><br></td></tr
><tr
id=sl_svn3623_120

><td class="source">      const fmatvec::SqrMat3&amp; getGBarOfFFR() const {<br></td></tr
><tr
id=sl_svn3623_121

><td class="source">        return G_bar;<br></td></tr
><tr
id=sl_svn3623_122

><td class="source">      }<br></td></tr
><tr
id=sl_svn3623_123

><td class="source"><br></td></tr
><tr
id=sl_svn3623_124

><td class="source">      const fmatvec::Vec3 getModeShapeVector(int node, int column) const;<br></td></tr
><tr
id=sl_svn3623_125

><td class="source"><br></td></tr
><tr
id=sl_svn3623_126

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_127

><td class="source">       * \brief  read u0, mij, mode shape matrix and stiffness matrix form the input file<br></td></tr
><tr
id=sl_svn3623_128

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_129

><td class="source">      void readFEMData(std::string inFilePath, const bool millimeterUnits, bool output = false);<br></td></tr
><tr
id=sl_svn3623_130

><td class="source"><br></td></tr
><tr
id=sl_svn3623_131

><td class="source">#ifdef HAVE_OPENMBVCPPINTERFACE<br></td></tr
><tr
id=sl_svn3623_132

><td class="source">      void enableFramePlot(double size = 1e-3, fmatvec::VecInt numbers = fmatvec::VecInt(0));<br></td></tr
><tr
id=sl_svn3623_133

><td class="source">#endif<br></td></tr
><tr
id=sl_svn3623_134

><td class="source"><br></td></tr
><tr
id=sl_svn3623_135

><td class="source">    protected:<br></td></tr
><tr
id=sl_svn3623_136

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_137

><td class="source">       * \brief  initialize the mass matrix<br></td></tr
><tr
id=sl_svn3623_138

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_139

><td class="source">      void initM(int k = 0);<br></td></tr
><tr
id=sl_svn3623_140

><td class="source"><br></td></tr
><tr
id=sl_svn3623_141

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_142

><td class="source">       * \brief  initialize the quadratic velocity vector<br></td></tr
><tr
id=sl_svn3623_143

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_144

><td class="source">      void initQv();<br></td></tr
><tr
id=sl_svn3623_145

><td class="source"><br></td></tr
><tr
id=sl_svn3623_146

><td class="source">      /*! <br></td></tr
><tr
id=sl_svn3623_147

><td class="source">       * \brief update the quadratic velocity vector<br></td></tr
><tr
id=sl_svn3623_148

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_149

><td class="source">      void updateQv();<br></td></tr
><tr
id=sl_svn3623_150

><td class="source"><br></td></tr
><tr
id=sl_svn3623_151

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_152

><td class="source">       * \brief compute the constant shape integrals of the whole body<br></td></tr
><tr
id=sl_svn3623_153

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_154

><td class="source">      void computeShapeIntegrals();<br></td></tr
><tr
id=sl_svn3623_155

><td class="source"><br></td></tr
><tr
id=sl_svn3623_156

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_157

><td class="source">       * \brief  update A, G_bar, and G_bar_Dot<br></td></tr
><tr
id=sl_svn3623_158

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_159

><td class="source">      void updateAGbarGbardot();<br></td></tr
><tr
id=sl_svn3623_160

><td class="source"><br></td></tr
><tr
id=sl_svn3623_161

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_162

><td class="source">       * \brief update FFR Frame<br></td></tr
><tr
id=sl_svn3623_163

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_164

><td class="source">      void updateFFRFrame();<br></td></tr
><tr
id=sl_svn3623_165

><td class="source"><br></td></tr
><tr
id=sl_svn3623_166

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_167

><td class="source">       * \brief total number of nodes<br></td></tr
><tr
id=sl_svn3623_168

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_169

><td class="source">      int nNodes;<br></td></tr
><tr
id=sl_svn3623_170

><td class="source"><br></td></tr
><tr
id=sl_svn3623_171

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_172

><td class="source">       * \brief Floating Frame of Reference<br></td></tr
><tr
id=sl_svn3623_173

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_174

><td class="source">      MBSim::Frame * FFR;<br></td></tr
><tr
id=sl_svn3623_175

><td class="source"><br></td></tr
><tr
id=sl_svn3623_176

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_177

><td class="source">       * \brief matrix for the computation of the mass-matrix (assembled part of the element matrix)<br></td></tr
><tr
id=sl_svn3623_178

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_179

><td class="source">      fmatvec::Vec3 I_1;<br></td></tr
><tr
id=sl_svn3623_180

><td class="source"><br></td></tr
><tr
id=sl_svn3623_181

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_182

><td class="source">       * \brief matrix<br></td></tr
><tr
id=sl_svn3623_183

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_184

><td class="source">      fmatvec::SymMat3 I_kl;<br></td></tr
><tr
id=sl_svn3623_185

><td class="source"><br></td></tr
><tr
id=sl_svn3623_186

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_187

><td class="source">       * \brief matrix for the computation of the mass-matrix (assembled part of the element matrix)<br></td></tr
><tr
id=sl_svn3623_188

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_189

><td class="source">      fmatvec::Mat S_bar;<br></td></tr
><tr
id=sl_svn3623_190

><td class="source"><br></td></tr
><tr
id=sl_svn3623_191

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_192

><td class="source">       * \brief matrix for the computation of the mass-matrix (assembled part of the element matrix)<br></td></tr
><tr
id=sl_svn3623_193

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_194

><td class="source">      fmatvec::SqrMat S_kl_bar[3][3];<br></td></tr
><tr
id=sl_svn3623_195

><td class="source"><br></td></tr
><tr
id=sl_svn3623_196

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_197

><td class="source">       * \brief matrix for the computation of the mass-matrix (assembled part of the element matrix)<br></td></tr
><tr
id=sl_svn3623_198

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_199

><td class="source">      fmatvec::RowVec I_kl_bar[3][3];<br></td></tr
><tr
id=sl_svn3623_200

><td class="source"><br></td></tr
><tr
id=sl_svn3623_201

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_202

><td class="source">       * \brief inertia tensor<br></td></tr
><tr
id=sl_svn3623_203

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_204

><td class="source">      fmatvec::SymMat3 I_ThetaTheta_bar;<br></td></tr
><tr
id=sl_svn3623_205

><td class="source"><br></td></tr
><tr
id=sl_svn3623_206

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_207

><td class="source">       * \brief I_ThetaF 3*nf<br></td></tr
><tr
id=sl_svn3623_208

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_209

><td class="source">      fmatvec::Mat I_ThetaF_bar;<br></td></tr
><tr
id=sl_svn3623_210

><td class="source"><br></td></tr
><tr
id=sl_svn3623_211

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_212

><td class="source">       * \brief stiffness matrix<br></td></tr
><tr
id=sl_svn3623_213

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_214

><td class="source">      fmatvec::SymMat K;<br></td></tr
><tr
id=sl_svn3623_215

><td class="source"><br></td></tr
><tr
id=sl_svn3623_216

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_217

><td class="source">       * \brief full stiffness matrix<br></td></tr
><tr
id=sl_svn3623_218

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_219

><td class="source">      fmatvec::SymMat KFull;<br></td></tr
><tr
id=sl_svn3623_220

><td class="source"><br></td></tr
><tr
id=sl_svn3623_221

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_222

><td class="source">       * \brief transformation matrix of the time derivates of the angles into tho angular velocity in reference coordinates<br></td></tr
><tr
id=sl_svn3623_223

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_224

><td class="source">      fmatvec::SqrMat3 G_bar;<br></td></tr
><tr
id=sl_svn3623_225

><td class="source"><br></td></tr
><tr
id=sl_svn3623_226

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_227

><td class="source">       * \brief transformation matrix of the time derivates of the angles into tho angular velocity in reference coordinates<br></td></tr
><tr
id=sl_svn3623_228

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_229

><td class="source">      fmatvec::SqrMat3 G_bar_Dot;<br></td></tr
><tr
id=sl_svn3623_230

><td class="source"><br></td></tr
><tr
id=sl_svn3623_231

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_232

><td class="source">       * \brief transformation matrix of coordinates of the moving frame of reference into the reference frame<br></td></tr
><tr
id=sl_svn3623_233

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_234

><td class="source">      fmatvec::SqrMat3 A;<br></td></tr
><tr
id=sl_svn3623_235

><td class="source"><br></td></tr
><tr
id=sl_svn3623_236

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_237

><td class="source">       * \brief matrix for the computation of the mass-matrix (assembled part of the element matrix)<br></td></tr
><tr
id=sl_svn3623_238

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_239

><td class="source">      fmatvec::SymMat M_FF;<br></td></tr
><tr
id=sl_svn3623_240

><td class="source"><br></td></tr
><tr
id=sl_svn3623_241

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_242

><td class="source">       * \brief quadratic velocity vector<br></td></tr
><tr
id=sl_svn3623_243

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_244

><td class="source">      fmatvec::Vec Qv;<br></td></tr
><tr
id=sl_svn3623_245

><td class="source"><br></td></tr
><tr
id=sl_svn3623_246

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_247

><td class="source">       * \brief lumped mass for each node<br></td></tr
><tr
id=sl_svn3623_248

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_249

><td class="source">      fmatvec::Vec mij;<br></td></tr
><tr
id=sl_svn3623_250

><td class="source"><br></td></tr
><tr
id=sl_svn3623_251

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_252

><td class="source">       * \brief matrix of all modes<br></td></tr
><tr
id=sl_svn3623_253

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_254

><td class="source">      fmatvec::Mat phiFull;<br></td></tr
><tr
id=sl_svn3623_255

><td class="source"><br></td></tr
><tr
id=sl_svn3623_256

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_257

><td class="source">       * \brief matrix of modes used<br></td></tr
><tr
id=sl_svn3623_258

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_259

><td class="source">      fmatvec::Mat phi;<br></td></tr
><tr
id=sl_svn3623_260

><td class="source"><br></td></tr
><tr
id=sl_svn3623_261

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_262

><td class="source">       * \brief initial position of each node<br></td></tr
><tr
id=sl_svn3623_263

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_264

><td class="source">      std::vector&lt;fmatvec::Vec3&gt; u0;<br></td></tr
><tr
id=sl_svn3623_265

><td class="source"><br></td></tr
><tr
id=sl_svn3623_266

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_267

><td class="source">       * \brief number of mode shapes used to describe the deformation<br></td></tr
><tr
id=sl_svn3623_268

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_269

><td class="source">      int nf;<br></td></tr
><tr
id=sl_svn3623_270

><td class="source"><br></td></tr
><tr
id=sl_svn3623_271

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_272

><td class="source">       * \brief open or closed beam structure<br></td></tr
><tr
id=sl_svn3623_273

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_274

><td class="source">      bool openStructure;<br></td></tr
><tr
id=sl_svn3623_275

><td class="source"><br></td></tr
><tr
id=sl_svn3623_276

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_277

><td class="source">       * \brief debug flag<br></td></tr
><tr
id=sl_svn3623_278

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_279

><td class="source">      bool DEBUG;<br></td></tr
><tr
id=sl_svn3623_280

><td class="source"><br></td></tr
><tr
id=sl_svn3623_281

><td class="source">      /**<br></td></tr
><tr
id=sl_svn3623_282

><td class="source">       * \brief first iteration flag<br></td></tr
><tr
id=sl_svn3623_283

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_284

><td class="source">      bool fistIterFlag;<br></td></tr
><tr
id=sl_svn3623_285

><td class="source">  };<br></td></tr
><tr
id=sl_svn3623_286

><td class="source">  <br></td></tr
><tr
id=sl_svn3623_287

><td class="source">  inline void FlexibleBodyLinearExternalFFR::BuildElements() {<br></td></tr
><tr
id=sl_svn3623_288

><td class="source">//    THROW_MBSIMERROR(&quot;(FlexibleBodyLinearExternalFFR::BuildElements(): Not implemented&quot;);<br></td></tr
><tr
id=sl_svn3623_289

><td class="source">  }<br></td></tr
><tr
id=sl_svn3623_290

><td class="source">  <br></td></tr
><tr
id=sl_svn3623_291

><td class="source">  inline void FlexibleBodyLinearExternalFFR::GlobalVectorContribution(int CurrentElement, const fmatvec::Vec&amp; locVec, fmatvec::Vec&amp; gloVec) {<br></td></tr
><tr
id=sl_svn3623_292

><td class="source">    THROW_MBSIMERROR(&quot;(FlexibleBodyLinearExternalFFR::GlobalVectorContribution(): Not implemented!&quot;);<br></td></tr
><tr
id=sl_svn3623_293

><td class="source">  }<br></td></tr
><tr
id=sl_svn3623_294

><td class="source"><br></td></tr
><tr
id=sl_svn3623_295

><td class="source">  inline void FlexibleBodyLinearExternalFFR::GlobalMatrixContribution(int CurrentElement, const fmatvec::Mat&amp; locMat, fmatvec::Mat&amp; gloMat) {<br></td></tr
><tr
id=sl_svn3623_296

><td class="source">    THROW_MBSIMERROR(&quot;(FlexibleBodyLinearExternalFFR::GlobalMatrixContribution(): Not implemented!&quot;);<br></td></tr
><tr
id=sl_svn3623_297

><td class="source">  }<br></td></tr
><tr
id=sl_svn3623_298

><td class="source"><br></td></tr
><tr
id=sl_svn3623_299

><td class="source">  inline void FlexibleBodyLinearExternalFFR::GlobalMatrixContribution(int CurrentElement, const fmatvec::SymMat&amp; locMat, fmatvec::SymMat&amp; gloMat) {<br></td></tr
><tr
id=sl_svn3623_300

><td class="source">    THROW_MBSIMERROR(&quot;(FlexibleBodyLinearExternalFFR::GlobalMatrixContribution(): Not implemented!&quot;);<br></td></tr
><tr
id=sl_svn3623_301

><td class="source">  }<br></td></tr
><tr
id=sl_svn3623_302

><td class="source">  <br></td></tr
><tr
id=sl_svn3623_303

><td class="source">  inline int FlexibleBodyLinearExternalFFR::getNumberElements() const {<br></td></tr
><tr
id=sl_svn3623_304

><td class="source">    return nNodes;<br></td></tr
><tr
id=sl_svn3623_305

><td class="source">  }<br></td></tr
><tr
id=sl_svn3623_306

><td class="source">  inline double FlexibleBodyLinearExternalFFR::getLength() const {<br></td></tr
><tr
id=sl_svn3623_307

><td class="source">    THROW_MBSIMERROR(&quot;(FlexibleBodyLinearExternalFFR::getLength(): Not implemented!&quot;);<br></td></tr
><tr
id=sl_svn3623_308

><td class="source">  }<br></td></tr
><tr
id=sl_svn3623_309

><td class="source">  inline bool FlexibleBodyLinearExternalFFR::isOpenStructure() const {<br></td></tr
><tr
id=sl_svn3623_310

><td class="source">    return openStructure;<br></td></tr
><tr
id=sl_svn3623_311

><td class="source">  }<br></td></tr
><tr
id=sl_svn3623_312

><td class="source"><br></td></tr
><tr
id=sl_svn3623_313

><td class="source">}<br></td></tr
><tr
id=sl_svn3623_314

><td class="source"><br></td></tr
><tr
id=sl_svn3623_315

><td class="source">#endif /* _FLEXIBLE_BODY_LINEAR_EXTERNAL_FFR_H_ */<br></td></tr
><tr
id=sl_svn3623_316

><td class="source"><br></td></tr
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
 <a href="/p/mbsim-env/source/detail?spec=svn3623&amp;r=3366">r3366</a>
 by friedrich.at.gc
 on Sep 13, 2014
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=3366&amp;format=side&amp;path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h&amp;old_path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h&amp;old=3297">Diff</a>
 </div>
 <pre>Reworked error handling (MBSimError):
Added a context to MBSimError: use
THROW_MBSIMERROR(&quot;error message&quot;) to throw
a error from objects derived from Element.
This will automatically add the path of
the element where the error occured to the
what() message of the exception.
If the context is not known at the throw
statement use &quot;throw MBSimErro(&quot;error
message&quot;) and add, maybe, the
context later in a catch(...) statement
using setContext and rethrow the exception
...</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/mbsim-env/source/detail?r=3366&spec=svn3623';
 var publish_url = '/p/mbsim-env/source/detail?r=3366&spec=svn3623#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/examples/mechanics/contacts/edge_mill/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/edge_mill/system.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/maxwell_contact/main.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/maxwell_contact/main.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/contacts/maxwell_contact/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/maxwell_contact/system.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/examples/mechanics/flexible_body/perlchain/system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain/system.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/analysers/eigenanalyser.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/analysers/eigenanalyser.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/body.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/body.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/constitutive_laws.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/constitutive_laws.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/circle_frustum.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circle_frustum.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/circle_frustum.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circle_frustum.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/circlesolid_contour1s.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circlesolid_contour1s.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/circlesolid_frustum2d.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circlesolid_frustum2d.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/circlesolid_plane.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circlesolid_plane.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/contact_kinematics.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/contact_kinematics.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/edge_edge.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/edge_edge.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/line_contour1s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/line_contour1s.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/point_contour1s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_contour1s.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/point_contourinterpolation.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_contourinterpolation.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/point_frustum.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_frustum.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/point_frustum.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_frustum.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/point_planewithfrustum.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_planewithfrustum.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/point_polynomialfrustum.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_polynomialfrustum.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/point_rectangle.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_rectangle.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/point_sphere.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_sphere.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/rectangle_polynomialfrustum.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/rectangle_polynomialfrustum.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/sphere_frustum.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/sphere_frustum.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/sphere_polynomialfrustum.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/sphere_polynomialfrustum.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contact_kinematics/sphere_sphere.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/sphere_sphere.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contour.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contour.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contour.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contour.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/contour1s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour1s.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/contour1s_analytical.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour1s_analytical.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/contour_continuum.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour_continuum.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/edge.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/edge.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/contours/line_segment.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/line_segment.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/dynamic_system.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/dynamic_system.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/dynamic_system_solver.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system_solver.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/element.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/element.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/element.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/element.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/friction.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/friction.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/functions/function.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/function.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/functions/kinematic_functions.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/kinematic_functions.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/functions/piecewise_polynom_function.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/piecewise_polynom_function.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/functions/symbolic_functions.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/symbolic_functions.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/functions/tabular_functions.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/tabular_functions.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/functions_contact.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions_contact.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/joint.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/joint.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/kinetic_excitation.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/kinetic_excitation.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/link.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/link.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/link_mechanics.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/link_mechanics.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/mbsim_event.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/mbsim_event.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/mbsim_event.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/mbsim_event.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/functions/lcp_reformulation_functions.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/functions/lcp_reformulation_functions.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/linear_complementarity_problem/linear_complementarity_problem.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/linear_complementarity_problem/linear_complementarity_problem.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/nurbs/nurbs_curve.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_curve.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/nurbs/nurbs_defs.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_defs.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/numerics/nurbs/nurbs_surface.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_surface.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/rigid_body.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/rigid_body.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/single_contact.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/single_contact.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/kernel/mbsim/spring_damper.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/kernel/mbsim/spring_damper.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimControl/mbsimControl/actuator.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimControl/mbsimControl/actuator.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimElectronics/mbsimElectronics/simulation_classes.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimElectronics/mbsimElectronics/simulation_classes.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circle_nurbsdisk2s.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circle_nurbsdisk2s.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circle_nurbsdisk2s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circle_nurbsdisk2s.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circlehollow_cylinderflexible.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circlehollow_cylinderflexible.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_contour2s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_contour2s.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_flexibleband.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_flexibleband.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_nurbsdisk2s.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_nurbsdisk2s.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_nurbsdisk2s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_nurbsdisk2s.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/neutral_contour/contour_1s_neutral_linear_external_FFR.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/neutral_contour/contour_1s_neutral_linear_external_FFR.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/neutral_contour/contour_2s_neutral_linear_external_FFR.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/neutral_contour/contour_2s_neutral_linear_external_FFR.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/nurbs_curve_1s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/nurbs_curve_1s.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/nurbs_disk_2s.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/nurbs_disk_2s.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/nurbs_disk_2s.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/nurbs_disk_2s.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_ancf.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_ancf.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_cosserat_rotation.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_cosserat_rotation.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_cosserat_translation.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_cosserat_translation.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_rcm.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_rcm.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_23_bta.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_23_bta.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_ancf.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_ancf.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_ancf.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_ancf.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_cosserat_rotation.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_cosserat_rotation.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_cosserat_translation.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_cosserat_translation.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm/trafo33RCM.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm/trafo33RCM.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm/weight33RCM.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm/weight33RCM.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_2s_13_disk.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_2s_13_disk.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_2s_13_mfr_mindlin.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_2s_13_mfr_mindlin.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/superelement_linear_external.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/superelement_linear_external.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/superelement_linear_external.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/superelement_linear_external.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_ancf.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_ancf.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_ancf.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_ancf.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_cosserat.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_cosserat.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_rcm.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_rcm.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_23_bta.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_23_bta.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_ancf.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_ancf.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_cosserat.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_cosserat.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_rcm.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_rcm.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_disk.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_disk.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_disk.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_disk.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_mfr_mindlin.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_mfr_mindlin.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_mfr_mindlin.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_mfr_mindlin.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external.h?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h?r\x3d3366\x26spec\x3dsvn3623');
 
 var selected_path = '/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h';
 
 
 changed_paths.push('/trunk/modules/mbsimHydraulics/mbsimHydraulics/checkvalve.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/checkvalve.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimHydraulics/mbsimHydraulics/controlvalve43.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/controlvalve43.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimHydraulics/mbsimHydraulics/dimensionless_line.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/dimensionless_line.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimHydraulics/mbsimHydraulics/elastic_line_galerkin.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/elastic_line_galerkin.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimHydraulics/mbsimHydraulics/hline.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/hline.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
 changed_paths.push('/trunk/modules/mbsimHydraulics/mbsimHydraulics/hnode_mec.cc');
 changed_urls.push('/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/hnode_mec.cc?r\x3d3366\x26spec\x3dsvn3623');
 
 
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
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/edge_mill/system.cc?r=3366&amp;spec=svn3623"
 
 >...ics/contacts/edge_mill/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/maxwell_contact/main.cc?r=3366&amp;spec=svn3623"
 
 >...contacts/maxwell_contact/main.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/contacts/maxwell_contact/system.cc?r=3366&amp;spec=svn3623"
 
 >...ntacts/maxwell_contact/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/examples/mechanics/flexible_body/perlchain/system.cc?r=3366&amp;spec=svn3623"
 
 >...lexible_body/perlchain/system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/analysers/eigenanalyser.cc?r=3366&amp;spec=svn3623"
 
 >...mbsim/analysers/eigenanalyser.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/body.cc?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/body.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/constitutive_laws.cc?r=3366&amp;spec=svn3623"
 
 >...ernel/mbsim/constitutive_laws.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact.cc?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/contact.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circle_frustum.cc?r=3366&amp;spec=svn3623"
 
 >...act_kinematics/circle_frustum.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circle_frustum.h?r=3366&amp;spec=svn3623"
 
 >...tact_kinematics/circle_frustum.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circlesolid_contour1s.cc?r=3366&amp;spec=svn3623"
 
 >...ematics/circlesolid_contour1s.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circlesolid_frustum2d.h?r=3366&amp;spec=svn3623"
 
 >...nematics/circlesolid_frustum2d.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/circlesolid_plane.h?r=3366&amp;spec=svn3623"
 
 >...t_kinematics/circlesolid_plane.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/contact_kinematics.h?r=3366&amp;spec=svn3623"
 
 >..._kinematics/contact_kinematics.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/edge_edge.h?r=3366&amp;spec=svn3623"
 
 >...m/contact_kinematics/edge_edge.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/line_contour1s.h?r=3366&amp;spec=svn3623"
 
 >...tact_kinematics/line_contour1s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_contour1s.h?r=3366&amp;spec=svn3623"
 
 >...act_kinematics/point_contour1s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_contourinterpolation.h?r=3366&amp;spec=svn3623"
 
 >...ics/point_contourinterpolation.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_frustum.cc?r=3366&amp;spec=svn3623"
 
 >...tact_kinematics/point_frustum.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_frustum.h?r=3366&amp;spec=svn3623"
 
 >...ntact_kinematics/point_frustum.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_planewithfrustum.h?r=3366&amp;spec=svn3623"
 
 >...ematics/point_planewithfrustum.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_polynomialfrustum.h?r=3366&amp;spec=svn3623"
 
 >...matics/point_polynomialfrustum.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_rectangle.h?r=3366&amp;spec=svn3623"
 
 >...act_kinematics/point_rectangle.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/point_sphere.h?r=3366&amp;spec=svn3623"
 
 >...ontact_kinematics/point_sphere.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/rectangle_polynomialfrustum.h?r=3366&amp;spec=svn3623"
 
 >...cs/rectangle_polynomialfrustum.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/sphere_frustum.h?r=3366&amp;spec=svn3623"
 
 >...tact_kinematics/sphere_frustum.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/sphere_polynomialfrustum.h?r=3366&amp;spec=svn3623"
 
 >...atics/sphere_polynomialfrustum.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contact_kinematics/sphere_sphere.h?r=3366&amp;spec=svn3623"
 
 >...ntact_kinematics/sphere_sphere.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contour.cc?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/contour.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contour.h?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/contour.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour1s.h?r=3366&amp;spec=svn3623"
 
 >...ernel/mbsim/contours/contour1s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour1s_analytical.cc?r=3366&amp;spec=svn3623"
 
 >...contours/contour1s_analytical.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/contour_continuum.h?r=3366&amp;spec=svn3623"
 
 >...sim/contours/contour_continuum.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/edge.cc?r=3366&amp;spec=svn3623"
 
 >...nk/kernel/mbsim/contours/edge.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/contours/line_segment.cc?r=3366&amp;spec=svn3623"
 
 >...l/mbsim/contours/line_segment.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system.cc?r=3366&amp;spec=svn3623"
 
 >...k/kernel/mbsim/dynamic_system.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system.h?r=3366&amp;spec=svn3623"
 
 >...nk/kernel/mbsim/dynamic_system.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/dynamic_system_solver.cc?r=3366&amp;spec=svn3623"
 
 >...l/mbsim/dynamic_system_solver.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/element.cc?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/element.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/element.h?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/element.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/friction.cc?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/friction.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/function.h?r=3366&amp;spec=svn3623"
 
 >...ernel/mbsim/functions/function.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/kinematic_functions.h?r=3366&amp;spec=svn3623"
 
 >.../functions/kinematic_functions.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/piecewise_polynom_function.h?r=3366&amp;spec=svn3623"
 
 >...ons/piecewise_polynom_function.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/symbolic_functions.h?r=3366&amp;spec=svn3623"
 
 >...m/functions/symbolic_functions.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions/tabular_functions.h?r=3366&amp;spec=svn3623"
 
 >...im/functions/tabular_functions.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/functions_contact.h?r=3366&amp;spec=svn3623"
 
 >...kernel/mbsim/functions_contact.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/joint.cc?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/joint.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/kinetic_excitation.cc?r=3366&amp;spec=svn3623"
 
 >...rnel/mbsim/kinetic_excitation.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/link.h?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/link.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/link_mechanics.cc?r=3366&amp;spec=svn3623"
 
 >...k/kernel/mbsim/link_mechanics.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/mbsim_event.cc?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/mbsim_event.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/mbsim_event.h?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/mbsim_event.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/functions/lcp_reformulation_functions.cc?r=3366&amp;spec=svn3623"
 
 >...s/lcp_reformulation_functions.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/linear_complementarity_problem/linear_complementarity_problem.cc?r=3366&amp;spec=svn3623"
 
 >...inear_complementarity_problem.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_curve.cc?r=3366&amp;spec=svn3623"
 
 >...im/numerics/nurbs/nurbs_curve.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_defs.h?r=3366&amp;spec=svn3623"
 
 >...bsim/numerics/nurbs/nurbs_defs.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/numerics/nurbs/nurbs_surface.cc?r=3366&amp;spec=svn3623"
 
 >.../numerics/nurbs/nurbs_surface.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/rigid_body.cc?r=3366&amp;spec=svn3623"
 
 >/trunk/kernel/mbsim/rigid_body.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/single_contact.cc?r=3366&amp;spec=svn3623"
 
 >...k/kernel/mbsim/single_contact.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/kernel/mbsim/spring_damper.cc?r=3366&amp;spec=svn3623"
 
 >...nk/kernel/mbsim/spring_damper.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimControl/mbsimControl/actuator.cc?r=3366&amp;spec=svn3623"
 
 >...Control/mbsimControl/actuator.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimElectronics/mbsimElectronics/simulation_classes.h?r=3366&amp;spec=svn3623"
 
 >...Electronics/simulation_classes.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circle_nurbsdisk2s.cc?r=3366&amp;spec=svn3623"
 
 >...kinematics/circle_nurbsdisk2s.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circle_nurbsdisk2s.h?r=3366&amp;spec=svn3623"
 
 >..._kinematics/circle_nurbsdisk2s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/circlehollow_cylinderflexible.h?r=3366&amp;spec=svn3623"
 
 >.../circlehollow_cylinderflexible.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_contour2s.h?r=3366&amp;spec=svn3623"
 
 >...act_kinematics/point_contour2s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_flexibleband.h?r=3366&amp;spec=svn3623"
 
 >..._kinematics/point_flexibleband.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_nurbsdisk2s.cc?r=3366&amp;spec=svn3623"
 
 >..._kinematics/point_nurbsdisk2s.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contact_kinematics/point_nurbsdisk2s.h?r=3366&amp;spec=svn3623"
 
 >...t_kinematics/point_nurbsdisk2s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/neutral_contour/contour_1s_neutral_linear_external_FFR.cc?r=3366&amp;spec=svn3623"
 
 >...s_neutral_linear_external_FFR.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/neutral_contour/contour_2s_neutral_linear_external_FFR.cc?r=3366&amp;spec=svn3623"
 
 >...s_neutral_linear_external_FFR.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/nurbs_curve_1s.h?r=3366&amp;spec=svn3623"
 
 >...leBody/contours/nurbs_curve_1s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/nurbs_disk_2s.cc?r=3366&amp;spec=svn3623"
 
 >...leBody/contours/nurbs_disk_2s.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/contours/nurbs_disk_2s.h?r=3366&amp;spec=svn3623"
 
 >...bleBody/contours/nurbs_disk_2s.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.cc?r=3366&amp;spec=svn3623"
 
 >...simFlexibleBody/flexible_body.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body.h?r=3366&amp;spec=svn3623"
 
 >...bsimFlexibleBody/flexible_body.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_ancf.h?r=3366&amp;spec=svn3623"
 
 >...ents/finite_element_1s_21_ancf.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_cosserat_rotation.h?r=3366&amp;spec=svn3623"
 
 >...lement_1s_21_cosserat_rotation.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_cosserat_translation.h?r=3366&amp;spec=svn3623"
 
 >...ent_1s_21_cosserat_translation.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_21_rcm.h?r=3366&amp;spec=svn3623"
 
 >...ments/finite_element_1s_21_rcm.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_23_bta.h?r=3366&amp;spec=svn3623"
 
 >...ments/finite_element_1s_23_bta.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_ancf.cc?r=3366&amp;spec=svn3623"
 
 >...nts/finite_element_1s_33_ancf.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_ancf.h?r=3366&amp;spec=svn3623"
 
 >...ents/finite_element_1s_33_ancf.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_cosserat_rotation.h?r=3366&amp;spec=svn3623"
 
 >...lement_1s_33_cosserat_rotation.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_cosserat_translation.h?r=3366&amp;spec=svn3623"
 
 >...ent_1s_33_cosserat_translation.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm.cc?r=3366&amp;spec=svn3623"
 
 >...ents/finite_element_1s_33_rcm.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm.h?r=3366&amp;spec=svn3623"
 
 >...ments/finite_element_1s_33_rcm.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm/trafo33RCM.cc?r=3366&amp;spec=svn3623"
 
 >..._element_1s_33_rcm/trafo33RCM.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_1s_33_rcm/weight33RCM.cc?r=3366&amp;spec=svn3623"
 
 >...element_1s_33_rcm/weight33RCM.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_2s_13_disk.h?r=3366&amp;spec=svn3623"
 
 >...ents/finite_element_2s_13_disk.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_2s_13_mfr_mindlin.h?r=3366&amp;spec=svn3623"
 
 >...nite_element_2s_13_mfr_mindlin.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h?r=3366&amp;spec=svn3623"
 
 >...nt_linear_external_lumped_node.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/superelement_linear_external.cc?r=3366&amp;spec=svn3623"
 
 >.../superelement_linear_external.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/superelement_linear_external.h?r=3366&amp;spec=svn3623"
 
 >...s/superelement_linear_external.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_ancf.cc?r=3366&amp;spec=svn3623"
 
 >...body/flexible_body_1s_21_ancf.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_ancf.h?r=3366&amp;spec=svn3623"
 
 >..._body/flexible_body_1s_21_ancf.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_cosserat.cc?r=3366&amp;spec=svn3623"
 
 >.../flexible_body_1s_21_cosserat.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_21_rcm.cc?r=3366&amp;spec=svn3623"
 
 >..._body/flexible_body_1s_21_rcm.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_23_bta.cc?r=3366&amp;spec=svn3623"
 
 >..._body/flexible_body_1s_23_bta.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_ancf.cc?r=3366&amp;spec=svn3623"
 
 >...body/flexible_body_1s_33_ancf.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_cosserat.cc?r=3366&amp;spec=svn3623"
 
 >.../flexible_body_1s_33_cosserat.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_33_rcm.cc?r=3366&amp;spec=svn3623"
 
 >..._body/flexible_body_1s_33_rcm.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_1s_cosserat.h?r=3366&amp;spec=svn3623"
 
 >...body/flexible_body_1s_cosserat.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_disk.cc?r=3366&amp;spec=svn3623"
 
 >...body/flexible_body_2s_13_disk.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_disk.h?r=3366&amp;spec=svn3623"
 
 >..._body/flexible_body_2s_13_disk.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_mfr_mindlin.cc?r=3366&amp;spec=svn3623"
 
 >...exible_body_2s_13_mfr_mindlin.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_2s_13_mfr_mindlin.h?r=3366&amp;spec=svn3623"
 
 >...lexible_body_2s_13_mfr_mindlin.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external.h?r=3366&amp;spec=svn3623"
 
 >.../flexible_body_linear_external.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.cc?r=3366&amp;spec=svn3623"
 
 >...ible_body_linear_external_ffr.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h?r=3366&amp;spec=svn3623"
 selected="selected"
 >...xible_body_linear_external_ffr.h</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/checkvalve.cc?r=3366&amp;spec=svn3623"
 
 >...cs/mbsimHydraulics/checkvalve.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/controlvalve43.cc?r=3366&amp;spec=svn3623"
 
 >...bsimHydraulics/controlvalve43.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/dimensionless_line.cc?r=3366&amp;spec=svn3623"
 
 >...Hydraulics/dimensionless_line.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/elastic_line_galerkin.cc?r=3366&amp;spec=svn3623"
 
 >...raulics/elastic_line_galerkin.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/hline.cc?r=3366&amp;spec=svn3623"
 
 >...raulics/mbsimHydraulics/hline.cc</option>
 
 <option value="/p/mbsim-env/source/browse/trunk/modules/mbsimHydraulics/mbsimHydraulics/hnode_mec.cc?r=3366&amp;spec=svn3623"
 
 >...ics/mbsimHydraulics/hnode_mec.cc</option>
 
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
 <a href="/p/mbsim-env/source/detail?spec=svn3623&r=3297">r3297</a>
 by kgrundl
 on Jul 12, 2014
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=3297&amp;format=side&amp;path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h&amp;old_path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h&amp;old=3259">Diff</a>
 <br>
 <pre class="ifOpened">reintegrate FFR (=user/grundl) branch
into trunk</pre>
 </div>
 
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/mbsim-env/source/detail?spec=svn3623&r=3259">r3259</a>
 by kgrundl
 on Jun 21, 2014
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=3259&amp;format=side&amp;path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h&amp;old_path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h&amp;old=2966">Diff</a>
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
 <a href="/p/mbsim-env/source/detail?spec=svn3623&r=2966">r2966</a>
 by kgrundl
 on Feb 14, 2014
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=2966&amp;format=side&amp;path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h&amp;old_path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h&amp;old=2940">Diff</a>
 <br>
 <pre class="ifOpened">Update for contours
Update of flexible body choosing the
number of modes now possible</pre>
 </div>
 
 
 <a href="/p/mbsim-env/source/list?path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h&start=3366">All revisions of this file</a>
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
 
 <div>Size: 9444 bytes,
 316 lines</div>
 
 <div><a href="//mbsim-env.googlecode.com/svn/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h">View raw file</a></div>
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
 var paths = {'svn3623': '/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/flexible_body_linear_external_ffr.h'}
 codereviews = CR_controller.setup(
 {"loggedInUserEmail": "wangzhanrock@gmail.com", "projectHomeUrl": "/p/mbsim-env", "relativeBaseUrl": "", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "domainName": null, "profileUrl": "/u/117234204990931991355/", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/1729405847801014513", "token": "ABZ6GAfZ6bnNU7uwjOJbCs3Xmq3zyz6Dpw:1420558503592", "projectName": "mbsim-env"}, '', 'svn3623', paths,
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

