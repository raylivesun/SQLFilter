<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml"><head>
    <title>MySQL General Purpose Stored Routines Library</title>
    <meta http-equiv="Content-Type" content="text/html; charset=windows-1252">
    <link rel="stylesheet" type="text/css" href="README_files/my-fixed-layout.css">
    <link rel="stylesheet" type="text/css" href="README_files/my-fixed-presentation.css">
</head>
<body>
    <div id="outer">
        <div id="hdr" align="center">
            <a href="http://savannah.nongnu.org/projects/mysql-sr-lib/" title="main page">
                <img src="README_files/mysql-sr-lib-logo.png" alt="" width="250" height="60" border="0">
            </a> 
                <!-- <h2>MySQL General Purpose Stored Routines Library </h2> -->
        </div>
    <div id="bar" align="center">&nbsp;
        <span style="padding:5px;font-size:11px;">A repository of ready to use routines for everyday needs</span>
    </div>
    <div id="bodyblock" align="right">
    <table cellspacing="0" cellpadding="0" border="0">
        <tbody><tr><td valign="top">
        <div id="l-col" align="left">
            <h4 align="center">Categories</h4>
            <ul class="small_ol">
                <li><a href="https://www.nongnu.org/mysql-sr-lib/doc/reference_guide.html#globals">Globals</a></li>
                <li><a href="https://www.nongnu.org/mysql-sr-lib/doc/reference_guide.html#arrays">Arrays</a></li>
                <li><a href="https://www.nongnu.org/mysql-sr-lib/doc/reference_guide.html#for_each_loops">"for each" loops</a></li>
                <li><a href="https://www.nongnu.org/mysql-sr-lib/doc/reference_guide.html#named_parameters">Named parameters</a></li>
                <li><a href="https://www.nongnu.org/mysql-sr-lib/doc/reference_guide.html#testing">Testing</a></li>
                <li><a href="https://www.nongnu.org/mysql-sr-lib/doc/reference_guide.html#syntax_helpers">Syntax helpers</a></li>
            </ul>
            <br>
            <h4 align="center">Related links</h4>
            <ul class="small_ol">
                <li><a href="http://www.planetmysql.org/" target="_blank">Planet MySQL</a></li>
                <li><a href="http://datacharmer.blogspot.com/" target="_blank">The Data Charmer</a></li>
                <li><a href="http://rpbouman.blogspot.com/" target="_blank">Roland Bouman</a></li>
                <li><a href="http://forums.mysql.com/list.php?98" target="_blank">SP forum</a></li>
            </ul>
            <br>
 
            <!-- To add a new section, copy and edit the following block-->
            <!--
            <h4 align="center">Section name</h4>
            <ul class="small_ol">
                <li><a href="#">item 1</a></li>
                <li><a href="#">item 2</a></li>
                <li><a href="#">item 3</a></li>
            </ul>
            <br/>
            -->
            <h4 align="center">more logos</h4>
            <ul class="small_ol">
                <li><a href="https://www.nongnu.org/mysql-sr-lib/mysql-sr-lib-logo.png" target="_blank">old stone (cur)</a></li>
                <li><a href="https://www.nongnu.org/mysql-sr-lib/mysql-sr-lib-logo2.png" target="_blank">cool metal</a></li>
                <li><a href="https://www.nongnu.org/mysql-sr-lib/mysql-sr-lib-logo3.png" target="_blank">glowing steel</a></li>
                <li><a href="https://www.nongnu.org/mysql-sr-lib/mysql-sr-lib-logo4.png" target="_blank">chrome one</a></li>
            </ul>
    </div>
    </td><td>
    <div id="cont">
        <!-- -->
        <h2 class="maintitle" align="center">MySQL General Purpose Stored Routines Library</h2>
        <!-- -->
        <div style="color: red;" align="center">Ver 0.4</div>

        <!-- <p>Copyright (C) 2005 Giuseppe Maxia, Stardata s.r.l.<br/> -->
        <a href="http://www.stardata.it/contatti_en.html">Contacts</a><br>
        <a href="http://savannah.nongnu.org/projects/mysql-sr-lib/">Main project page</a><p></p>

<h3>PURPOSE</h3>

<p>This routine library will collect general purpose MySQL 5 stored
procedures and functions. What is to be considered "general purpose"? 
Any routine that enhances the language itself or that can be useful
in an abstract database fits the bill.</p>

<p>Since its appearance, MySQL stored routines language has proved itself
useful and powerful, and yet it lacks many features that we have become
accustomed to in other languages, and we would like to see in MySQL::SP
as well. Stored routines that improve the language espressiveness and 
usability fall in this category.</p>

<p>Furthermore, there are common tasks that can get accomplished by a stored
routine, and are not related to a particular database. Also these routines
are good candidates for this library.</p>
<p><a href="http://datacharmer.blogspot.com/2005/11/mysql-5-general-purpose-routine.html" target="_blank">Presentation article</a></p>

<h3>CURRENT CATEGORIES</h3>

<p>At the very beginning of this project, I have put some categories that got
populated faster than others, and thus they became, in my view, the ones with
the highest priority.</p>

<h4>GLOBALS</h4>
<p>An even more general purpose module among the general purpose routines. This module
covers miscellaneous routines and provides support for global variables that survive
across connections.
</p>
<p><a href="http://datacharmer.blogspot.com/2006/01/mysql-5-general-purpose-routine.html" target="_blank">article on globals</a> </p>

<h4>ARRAYS AND BASIC DATA STRUCTURES</h4>

<p>Perhaps the biggest disappointment when MySQL::SP language was disclosed was 
the lack of arrays. Not as a SQL type, of which frankly I can do without, as
it breaks normalization, but as a language component. Without arrays, and 
without things like queues and stacks, I feel that my programming abilities
are severely cut down.</p>
<p>Thus this first component, which inmplements named arrays where you access
items by index, but that can also be treated like Perl hashes, where items
are accessed by name. Built-in with them are some stack and queue features,
so that an array is automatically a queue, if accessed with shift/unshift,
or a stack, if accessed with push/pop.</p>
<p>Further routines to transform arrays to strings and strings to arrays make 
this library ready for prime time.</p>
<p><a href="http://datacharmer.blogspot.com/2005/11/mysql-5-general-purpose-routine_28.html" target="_blank">article on arrays</a> </p>

<h4>"FOR EACH" LOOPS</h4>

<p>I don't know you, but I find myself doing quite often things like</p>
<pre class="code">$ for $X in `mysql -B -N -e 'show tables'` ; \
    do perl -pe "something with $X" | \ 
    mysql -e "something else with $X" ; done
</pre>
<p>i.e. I get a list out of mysql, treat the list with some sort of filter,
and then feed it back to the database.</p>
<p>Sometimes I fire up a quick Perl script to do the whole task, but most of the 
times the whole thing would be just a simple matter if MySQL had a FOR loop
that you can use from a regular SQL statement.</p>
<p>This component came out of this need. Now I have routines that accept
some parameters and perform for me a loop with a counter, or using a 
dataset of table values, or walk through an array.</p>
<p><a href="http://datacharmer.blogspot.com/2005/12/mysql-5-general-purpose-routine.html" target="_blank">Article on for_each loops</a></p>


<h4>NAMED PARAMETERS</h4>
<p>In the process of making the "for each" routines, I came to the disappointing
discovery that I had to use quite a lot of parameters if I wanted to achieve
some powerful results. When you have routines that need more than three
parameters, as every programmer knows, it is quite difficult to get the order
right, and many mistakes can come from this situation. Thus, I wanted to
implement a simple way of calling my complex routines with maned parameters, 
something that in Perl I do like this:</p>
<pre class="code">  function_name( 
    db_name    =&gt; 'world', 
    table_name =&gt; 'City', 
    expression =&gt; 'where CountryCode = "ITA"'
  );
</pre>
<p>This way, if I misplace one of the parameters, it does not matter, because
they are retrieved by name. My routine does almost this ("almost", because
lack of language power prevents an exact implementation). It lets you pass
an array of named parameters (key + value) and a hidden mechanism will
sort out the parameters and pass them to the receiving routine in the
correct order.</p>
<p>The corresponding MySQL code would be:</p>
<pre class="code">    select array_set('mypar', 'db_name', 'world'), 
           array_set('mypar', 'table_name', 'City'), 
           array_set('mypar', 'expression', 'where CountryCode = "ITA"')\G
    call simple_sp('function_name', 'mypar');
</pre>
<p>As a bonus, I now have an array of parameters that I can reuse when I need
them, perhaps after changing one or two parameter values.
</p>
<p><a href="http://datacharmer.blogspot.com/2005/12/mysql-5-general-purpose-routine_12.html" target="_blank">Article on syntax helpers and named parameters</a></p>

<h4>SYNTAX HELPERS</h4>
<p>As I said, my routines can grow their parameters quite fast, and remembering
all of them can be difficult even for their own author. Here comes another
component that registers all the routines syntax, and has a way of showing
you a quick excerpt of their usage.</p>
<p>This helper is also a key component of the routines that deal with named 
parameters.</p>
<!-- -->
In case you were wondering, the reference guide you can see in the CVS repository
was created by just these two calls:

<pre class="code">    call for_each_table_value_simple(
            database(),
            '_routine_syntax',
            'routine_name',
            'routine_type="function"', 
            'select fsyntax("$I1")')\G
    call for_each_table_value_simple(
            database(),
            '_routine_syntax',
            'routine_name',
            'routine_type="procedure"', 
            'select psyntax("$I1")')\G
</pre>            
<!-- -->

<h4>TESTING</h4>
<p>Test units are now available for each module, and support for making your own testing
is provided through some routines that make the process of testing quite easy.
</p>
<p><a href="http://datacharmer.blogspot.com/2006/01/mysql-5-general-purpose-routine_27.html" target="_blank">article on testing</a> </p>

<hr>
<h2>LEGAL NOTICE</h2>
<blockquote>
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.<br>

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.<br>

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
</blockquote>

<!-- <hr> -->

</div></td></tr>

<tr><td colspan="2">

<div id="ftr" align="center">Copyright (c) 2005 Giuseppe Maxia, Stardata s.r.l.</div>

</td></tr></tbody></table>


</div></div></body></html>