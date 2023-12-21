<h2><a href="https://leetcode.com/problems/check-if-the-number-is-fascinating/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2729. Check if The Number is Fascinating</a></h2><h3>Easy</h3><hr><div><p>You are given an integer <code>n</code> that consists of exactly <code>3</code> digits.</p>

<p>We call the number <code>n</code> <strong>fascinating</strong> if, after the following modification, the resulting number contains all the digits from <code>1</code> to <code>9</code> <strong>exactly</strong> once and does not contain any <code>0</code>'s:</p>

<ul>
	<li><strong>Concatenate</strong> <code>n</code> with the numbers <code>2 * n</code> and <code>3 * n</code>.</li>
</ul>

<p>Return <code>true</code><em> if </em><code>n</code><em> is fascinating, or </em><code>false</code><em> otherwise</em>.</p>

<p><strong>Concatenating</strong> two numbers means joining them together. For example, the concatenation of <code>121</code> and <code>371</code> is <code>121371</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> n = 192
<strong>Output:</strong> true
<strong>Explanation:</strong> We concatenate the numbers n = 192 and 2 * n = 384 and 3 * n = 576. The resulting number is 192384576. This number contains all the digits from 1 to 9 exactly once.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> n = 100
<strong>Output:</strong> false
<strong>Explanation:</strong> We concatenate the numbers n = 100 and 2 * n = 200 and 3 * n = 300. The resulting number is 100200300. This number does not satisfy any of the conditions.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>100 &lt;= n &lt;= 999</code></li>
</ul>
</div>