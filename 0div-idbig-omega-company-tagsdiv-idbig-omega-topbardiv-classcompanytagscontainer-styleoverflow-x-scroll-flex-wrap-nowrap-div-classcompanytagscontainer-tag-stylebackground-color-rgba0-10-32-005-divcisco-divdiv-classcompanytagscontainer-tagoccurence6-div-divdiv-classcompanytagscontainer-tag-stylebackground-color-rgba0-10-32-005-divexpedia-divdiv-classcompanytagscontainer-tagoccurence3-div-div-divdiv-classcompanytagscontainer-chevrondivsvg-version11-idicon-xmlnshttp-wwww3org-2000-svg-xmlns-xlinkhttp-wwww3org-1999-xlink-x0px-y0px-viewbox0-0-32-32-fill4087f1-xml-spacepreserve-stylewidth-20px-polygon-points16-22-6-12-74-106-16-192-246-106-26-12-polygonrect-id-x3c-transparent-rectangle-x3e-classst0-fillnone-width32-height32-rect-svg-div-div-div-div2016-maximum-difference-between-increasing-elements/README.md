<h2><a href="https://leetcode.com/problems/maximum-difference-between-increasing-elements/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Cisco</div><div class="companyTagsContainer--tagOccurence">6</div></div><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Expedia</div><div class="companyTagsContainer--tagOccurence">3</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>2016. Maximum Difference Between Increasing Elements</a></h2><h3>Easy</h3><hr><div><p>Given a <strong>0-indexed</strong> integer array <code>nums</code> of size <code>n</code>, find the <strong>maximum difference</strong> between <code>nums[i]</code> and <code>nums[j]</code> (i.e., <code>nums[j] - nums[i]</code>), such that <code>0 &lt;= i &lt; j &lt; n</code> and <code>nums[i] &lt; nums[j]</code>.</p>

<p>Return <em>the <strong>maximum difference</strong>. </em>If no such <code>i</code> and <code>j</code> exists, return <code>-1</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [7,<strong><u>1</u></strong>,<strong><u>5</u></strong>,4]
<strong>Output:</strong> 4
<strong>Explanation:</strong>
The maximum difference occurs with i = 1 and j = 2, nums[j] - nums[i] = 5 - 1 = 4.
Note that with i = 1 and j = 0, the difference nums[j] - nums[i] = 7 - 1 = 6, but i &gt; j, so it is not valid.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [9,4,3,2]
<strong>Output:</strong> -1
<strong>Explanation:</strong>
There is no i and j such that i &lt; j and nums[i] &lt; nums[j].
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> nums = [<strong><u>1</u></strong>,5,2,<strong><u>10</u></strong>]
<strong>Output:</strong> 9
<strong>Explanation:</strong>
The maximum difference occurs with i = 0 and j = 3, nums[j] - nums[i] = 10 - 1 = 9.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>2 &lt;= n &lt;= 1000</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
</div>