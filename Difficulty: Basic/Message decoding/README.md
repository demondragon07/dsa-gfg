<h2><a href="https://www.geeksforgeeks.org/problems/message-decoding4305/1">Message decoding</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string S, check whether it can be converted into the string "hello" by deleting some characters from it.<br>
<strong>Note : </strong>S&nbsp;can have&nbsp;both uppercase and lowercase letters.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "bbbbbxxhhelllllooudd"
<strong>Output:</strong> 1
<strong>Explanation</strong>: The string hello is marked
in bold: bbbbbxxh<strong>hel</strong>lll<strong>lo</strong>oudd
</span>
</pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S = "hlelo"
<strong>Output:</strong> 0
<strong>Explanation</strong>: It's impossible to convert
the given string into "hello".
</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>decode()&nbsp;</strong>which takes the string S as input and returns the true if the string can be converted to "hello", else return false.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=|S|&lt;=10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>two-pointer-algorithm</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;