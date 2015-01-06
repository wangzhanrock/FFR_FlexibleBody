



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="https://ssl.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "ABZ6GAcpciZy5Gd4nItC_3X350eb4MC62A:1420558484385";
 
 
 var CS_env = {"loggedInUserEmail": "wangzhanrock@gmail.com", "projectHomeUrl": "/p/mbsim-env", "relativeBaseUrl": "", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "domainName": null, "profileUrl": "/u/117234204990931991355/", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/1729405847801014513", "token": "ABZ6GAcpciZy5Gd4nItC_3X350eb4MC62A:1420558484385", "projectName": "mbsim-env"};
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
 
 
 <title>finite_element_linear_external_lumped_node.h - 
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
 | <a href="https://www.google.com/accounts/Logout?continue=https%3A%2F%2Fcode.google.com%2Fp%2Fmbsim-env%2Fsource%2Fbrowse%2Ftrunk%2Fmodules%2FmbsimFlexibleBody%2FmbsimFlexibleBody%2Fflexible_body%2Ffinite_elements%2Ffinite_element_linear_external_lumped_node.h" 
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
 <span id="crumb_links" class="ifClosed"><a href="/p/mbsim-env/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/">modules</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/">mbsimFlexibleBody</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/">mbsimFlexibleBody</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/">flexible_body</a><span class="sp">/&nbsp;</span><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/">finite_elements</a><span class="sp">/&nbsp;</span>finite_element_linear_external_lumped_node.h</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h?edit=1"
 ><img src="https://ssl.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/mbsim-env/source/browse/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h?r=3297" title="Previous">&lsaquo;r3297</a></li>
 
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
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn3623_1

><td class="source">/* Copyright (C) 2004-2013 MBSim Development Team<br></td></tr
><tr
id=sl_svn3623_2

><td class="source"> *<br></td></tr
><tr
id=sl_svn3623_3

><td class="source"> * This library is free software; you can redistribute it and/or<br></td></tr
><tr
id=sl_svn3623_4

><td class="source"> * modify it under the terms of the GNU Lesser General Public<br></td></tr
><tr
id=sl_svn3623_5

><td class="source"> * License as published by the Free Software Foundation; either<br></td></tr
><tr
id=sl_svn3623_6

><td class="source"> * version 2.1 of the License, or (at your option) any later version.<br></td></tr
><tr
id=sl_svn3623_7

><td class="source"> *<br></td></tr
><tr
id=sl_svn3623_8

><td class="source"> * This library is distributed in the hope that it will be useful,<br></td></tr
><tr
id=sl_svn3623_9

><td class="source"> * but WITHOUT ANY WARRANTY; without even the implied warranty of<br></td></tr
><tr
id=sl_svn3623_10

><td class="source"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU<br></td></tr
><tr
id=sl_svn3623_11

><td class="source"> * Lesser General Public License for more details.<br></td></tr
><tr
id=sl_svn3623_12

><td class="source"> *<br></td></tr
><tr
id=sl_svn3623_13

><td class="source"> * You should have received a copy of the GNU Lesser General Public<br></td></tr
><tr
id=sl_svn3623_14

><td class="source"> * License along with this library; if not, write to the Free Software<br></td></tr
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

><td class="source"> *          rzander@users.berlios.de<br></td></tr
><tr
id=sl_svn3623_19

><td class="source"> */<br></td></tr
><tr
id=sl_svn3623_20

><td class="source"><br></td></tr
><tr
id=sl_svn3623_21

><td class="source">#ifndef _FINITE_ELEMENT_LINEAR_EXTERNAL_LUMPED_NODE_H_<br></td></tr
><tr
id=sl_svn3623_22

><td class="source">#define _FINITE_ELEMENT_LINEAR_EXTERNAL_LUMPED_NODE_H_<br></td></tr
><tr
id=sl_svn3623_23

><td class="source"><br></td></tr
><tr
id=sl_svn3623_24

><td class="source">#include &lt;fmatvec/fmatvec.h&gt;<br></td></tr
><tr
id=sl_svn3623_25

><td class="source">#include &quot;mbsim/mbsim_event.h&quot;<br></td></tr
><tr
id=sl_svn3623_26

><td class="source">#include &lt;mbsim/discretization_interface.h&gt;<br></td></tr
><tr
id=sl_svn3623_27

><td class="source"><br></td></tr
><tr
id=sl_svn3623_28

><td class="source">namespace MBSimFlexibleBody {<br></td></tr
><tr
id=sl_svn3623_29

><td class="source"><br></td></tr
><tr
id=sl_svn3623_30

><td class="source">  class FiniteElementLinearExternalLumpedNode : public MBSim::DiscretizationInterface {<br></td></tr
><tr
id=sl_svn3623_31

><td class="source"><br></td></tr
><tr
id=sl_svn3623_32

><td class="source">    public:<br></td></tr
><tr
id=sl_svn3623_33

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_34

><td class="source">       * \brief constructor<br></td></tr
><tr
id=sl_svn3623_35

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_36

><td class="source">      FiniteElementLinearExternalLumpedNode(double&amp; mij_, fmatvec::Vec3&amp; u0_, const fmatvec::Mat3xV&amp; phi_);<br></td></tr
><tr
id=sl_svn3623_37

><td class="source"><br></td></tr
><tr
id=sl_svn3623_38

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_39

><td class="source">       * \brief destructor<br></td></tr
><tr
id=sl_svn3623_40

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_41

><td class="source">      virtual ~FiniteElementLinearExternalLumpedNode();<br></td></tr
><tr
id=sl_svn3623_42

><td class="source"><br></td></tr
><tr
id=sl_svn3623_43

><td class="source">      /* INTERFACE OF DISCRETIZATIONINTERFACE */<br></td></tr
><tr
id=sl_svn3623_44

><td class="source">      virtual const fmatvec::SymMat&amp; getM() const;<br></td></tr
><tr
id=sl_svn3623_45

><td class="source">      virtual const fmatvec::Vec&amp; geth() const;<br></td></tr
><tr
id=sl_svn3623_46

><td class="source">      virtual const fmatvec::SqrMat&amp; getdhdq() const;<br></td></tr
><tr
id=sl_svn3623_47

><td class="source">      virtual const fmatvec::SqrMat&amp; getdhdu() const;<br></td></tr
><tr
id=sl_svn3623_48

><td class="source">      virtual int getqSize() const;<br></td></tr
><tr
id=sl_svn3623_49

><td class="source">      virtual int getuSize() const;<br></td></tr
><tr
id=sl_svn3623_50

><td class="source">      virtual void computeM(const fmatvec::Vec&amp; qG);<br></td></tr
><tr
id=sl_svn3623_51

><td class="source">      virtual void computeh(const fmatvec::Vec&amp; qG, const fmatvec::Vec&amp; qGt);<br></td></tr
><tr
id=sl_svn3623_52

><td class="source">      virtual void computedhdz(const fmatvec::Vec&amp; qG, const fmatvec::Vec&amp; qGt);<br></td></tr
><tr
id=sl_svn3623_53

><td class="source">      virtual double computeKineticEnergy(const fmatvec::Vec&amp; qG, const fmatvec::Vec&amp; qGt);<br></td></tr
><tr
id=sl_svn3623_54

><td class="source">      virtual double computeGravitationalEnergy(const fmatvec::Vec&amp; qG);<br></td></tr
><tr
id=sl_svn3623_55

><td class="source">      virtual double computeElasticEnergy(const fmatvec::Vec&amp; qG);<br></td></tr
><tr
id=sl_svn3623_56

><td class="source">      virtual fmatvec::Vec computePosition(const fmatvec::Vec&amp; q, const MBSim::ContourPointData &amp;data);<br></td></tr
><tr
id=sl_svn3623_57

><td class="source">      virtual fmatvec::SqrMat computeOrientation(const fmatvec::Vec&amp; q, const MBSim::ContourPointData &amp;data);<br></td></tr
><tr
id=sl_svn3623_58

><td class="source">      virtual fmatvec::Vec computeVelocity(const fmatvec::Vec&amp; q, const fmatvec::Vec&amp; u, const MBSim::ContourPointData &amp;data);<br></td></tr
><tr
id=sl_svn3623_59

><td class="source">      virtual fmatvec::Vec computeAngularVelocity(const fmatvec::Vec&amp; q, const fmatvec::Vec&amp; u, const MBSim::ContourPointData &amp;data);<br></td></tr
><tr
id=sl_svn3623_60

><td class="source">      virtual fmatvec::Mat computeJacobianOfMotion(const fmatvec::Vec&amp; qG, const MBSim::ContourPointData&amp; data);<br></td></tr
><tr
id=sl_svn3623_61

><td class="source">      /***************************************************/<br></td></tr
><tr
id=sl_svn3623_62

><td class="source"><br></td></tr
><tr
id=sl_svn3623_63

><td class="source">      const double getMij() const;<br></td></tr
><tr
id=sl_svn3623_64

><td class="source">//      fmatvec::Vec getU();<br></td></tr
><tr
id=sl_svn3623_65

><td class="source">      const fmatvec::Vec3&amp; getU0() const;<br></td></tr
><tr
id=sl_svn3623_66

><td class="source">      const fmatvec::Mat3xV&amp; getModeShape() const;<br></td></tr
><tr
id=sl_svn3623_67

><td class="source"><br></td></tr
><tr
id=sl_svn3623_68

><td class="source">    private:<br></td></tr
><tr
id=sl_svn3623_69

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_70

><td class="source">       * \brief lumped mass<br></td></tr
><tr
id=sl_svn3623_71

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_72

><td class="source">      const double mij;<br></td></tr
><tr
id=sl_svn3623_73

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_74

><td class="source">       * \brief undeformed position vector<br></td></tr
><tr
id=sl_svn3623_75

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_76

><td class="source">      const fmatvec::Vec3 u0;<br></td></tr
><tr
id=sl_svn3623_77

><td class="source">      /*!<br></td></tr
><tr
id=sl_svn3623_78

><td class="source">       * \brief mode shape vector: 3*nf<br></td></tr
><tr
id=sl_svn3623_79

><td class="source">       */<br></td></tr
><tr
id=sl_svn3623_80

><td class="source">      fmatvec::Mat3xV phi;<br></td></tr
><tr
id=sl_svn3623_81

><td class="source">  };<br></td></tr
><tr
id=sl_svn3623_82

><td class="source"><br></td></tr
><tr
id=sl_svn3623_83

><td class="source">  inline const fmatvec::SymMat&amp; FiniteElementLinearExternalLumpedNode::getM() const { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::getM): Not implemented&quot;);  }<br></td></tr
><tr
id=sl_svn3623_84

><td class="source">  inline const fmatvec::Vec&amp; FiniteElementLinearExternalLumpedNode::geth() const { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::geth): Not implemented&quot;);}<br></td></tr
><tr
id=sl_svn3623_85

><td class="source">  inline const fmatvec::SqrMat&amp; FiniteElementLinearExternalLumpedNode::getdhdq() const { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::getdhdq): Not implemented&quot;);}<br></td></tr
><tr
id=sl_svn3623_86

><td class="source">  inline const fmatvec::SqrMat&amp; FiniteElementLinearExternalLumpedNode::getdhdu() const {throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::getdhdu): Not implemented&quot;);}<br></td></tr
><tr
id=sl_svn3623_87

><td class="source">  inline int FiniteElementLinearExternalLumpedNode::getqSize() const { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::getqSize): Not implemented&quot;); }<br></td></tr
><tr
id=sl_svn3623_88

><td class="source">  inline int FiniteElementLinearExternalLumpedNode::getuSize() const { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::getuSize): Not implemented&quot;);}<br></td></tr
><tr
id=sl_svn3623_89

><td class="source">  inline void  FiniteElementLinearExternalLumpedNode::computeM(const fmatvec::Vec&amp; qG) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computeM): Not implemented&quot;); }<br></td></tr
><tr
id=sl_svn3623_90

><td class="source">  inline void  FiniteElementLinearExternalLumpedNode::computeh(const fmatvec::Vec&amp; qG, const fmatvec::Vec&amp; qGt) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computeh): Not implemented&quot;); }<br></td></tr
><tr
id=sl_svn3623_91

><td class="source">  inline void  FiniteElementLinearExternalLumpedNode::computedhdz(const fmatvec::Vec&amp; qG, const fmatvec::Vec&amp; qGt) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computedhdz): Not implemented&quot;); }<br></td></tr
><tr
id=sl_svn3623_92

><td class="source">  inline double FiniteElementLinearExternalLumpedNode::computeKineticEnergy(const fmatvec::Vec&amp; qG, const fmatvec::Vec&amp; qGt) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computeKineticEnergy): Not implemented&quot;); }<br></td></tr
><tr
id=sl_svn3623_93

><td class="source">  inline double FiniteElementLinearExternalLumpedNode::computeGravitationalEnergy(const fmatvec::Vec&amp; qG) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computeGravitationalEnergy): Not implemented&quot;); }<br></td></tr
><tr
id=sl_svn3623_94

><td class="source">  inline double FiniteElementLinearExternalLumpedNode::computeElasticEnergy(const fmatvec::Vec&amp; qG) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computeElasticEnergy): Not implemented&quot;); }<br></td></tr
><tr
id=sl_svn3623_95

><td class="source">  inline fmatvec::Vec FiniteElementLinearExternalLumpedNode::computePosition(const fmatvec::Vec&amp; q, const MBSim::ContourPointData &amp;data) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computePosition): Not implemented!&quot;); }<br></td></tr
><tr
id=sl_svn3623_96

><td class="source">  inline fmatvec::SqrMat FiniteElementLinearExternalLumpedNode::computeOrientation(const fmatvec::Vec&amp; q, const MBSim::ContourPointData &amp;data) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computeOrientation): Not implemented!&quot;); }<br></td></tr
><tr
id=sl_svn3623_97

><td class="source">  inline fmatvec::Vec FiniteElementLinearExternalLumpedNode::computeVelocity(const fmatvec::Vec&amp; q, const fmatvec::Vec&amp; u, const MBSim::ContourPointData &amp;data) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computeVelocity): Not implemented!&quot;); }<br></td></tr
><tr
id=sl_svn3623_98

><td class="source">  inline fmatvec::Vec FiniteElementLinearExternalLumpedNode::computeAngularVelocity(const fmatvec::Vec&amp; q, const fmatvec::Vec&amp; u, const MBSim::ContourPointData &amp;data) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computeAngularVelocity): Not implemented!&quot;); }<br></td></tr
><tr
id=sl_svn3623_99

><td class="source">  inline fmatvec::Mat FiniteElementLinearExternalLumpedNode::computeJacobianOfMotion(const fmatvec::Vec&amp; qG,const MBSim::ContourPointData&amp; data) { throw MBSim::MBSimError(&quot;(FiniteElementLinearExternalLumpedNode::computeJacobianOfMotion): Not implemented&quot;); }<br></td></tr
><tr
id=sl_svn3623_100

><td class="source"><br></td></tr
><tr
id=sl_svn3623_101

><td class="source"><br></td></tr
><tr
id=sl_svn3623_102

><td class="source">  inline const double FiniteElementLinearExternalLumpedNode::getMij() const {return mij;}<br></td></tr
><tr
id=sl_svn3623_103

><td class="source">  inline const fmatvec::Vec3&amp; FiniteElementLinearExternalLumpedNode::getU0() const {return u0;}<br></td></tr
><tr
id=sl_svn3623_104

><td class="source">  inline const fmatvec::Mat3xV&amp; FiniteElementLinearExternalLumpedNode::getModeShape() const {return phi;}<br></td></tr
><tr
id=sl_svn3623_105

><td class="source"><br></td></tr
><tr
id=sl_svn3623_106

><td class="source">}<br></td></tr
><tr
id=sl_svn3623_107

><td class="source"><br></td></tr
><tr
id=sl_svn3623_108

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
 <a href="/p/mbsim-env/source/detail?spec=svn3623&amp;r=3366">r3366</a>
 by friedrich.at.gc
 on Sep 13, 2014
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=3366&amp;format=side&amp;path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h&amp;old_path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h&amp;old=3297">Diff</a>
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
 
 var selected_path = '/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h';
 
 
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
 selected="selected"
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
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=3297&amp;format=side&amp;path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h&amp;old_path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h&amp;old=2864">Diff</a>
 <br>
 <pre class="ifOpened">reintegrate FFR (=user/grundl) branch
into trunk</pre>
 </div>
 
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="https://ssl.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/mbsim-env/source/detail?spec=svn3623&r=2864">r2864</a>
 by kgrundl
 on Dec 19, 2013
 &nbsp; <a href="/p/mbsim-env/source/diff?spec=svn3623&r=2864&amp;format=side&amp;path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h&amp;old_path=/branches/user/grundl/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h&amp;old=">Diff</a>
 <br>
 <pre class="ifOpened">committing first version of the FFR
examples using a nurbs interpolation
for the contours. The input files for
the FFR examples are not distributed.</pre>
 </div>
 
 
 <a href="/p/mbsim-env/source/list?path=/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h&start=3366">All revisions of this file</a>
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
 
 <div>Size: 7287 bytes,
 108 lines</div>
 
 <div><a href="//mbsim-env.googlecode.com/svn/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h">View raw file</a></div>
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
 var paths = {'svn3623': '/trunk/modules/mbsimFlexibleBody/mbsimFlexibleBody/flexible_body/finite_elements/finite_element_linear_external_lumped_node.h'}
 codereviews = CR_controller.setup(
 {"loggedInUserEmail": "wangzhanrock@gmail.com", "projectHomeUrl": "/p/mbsim-env", "relativeBaseUrl": "", "assetHostPath": "https://ssl.gstatic.com/codesite/ph", "domainName": null, "profileUrl": "/u/117234204990931991355/", "assetVersionPath": "https://ssl.gstatic.com/codesite/ph/1729405847801014513", "token": "ABZ6GAcpciZy5Gd4nItC_3X350eb4MC62A:1420558484385", "projectName": "mbsim-env"}, '', 'svn3623', paths,
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

