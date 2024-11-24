<h1>
<b>Aim:</b>
</h1>
This program demonstrates Binary Search on a sorted array using both Iterative and Recursive methods to find the index of a specified element.
<br>
<h1>Algorithm:</h1>
<br>
<b>Binary Search (Iterative Method)</b>:
<ol>
<li>Input: A sorted list List, the total number of elements n, and the element to be searched Key.</li>
<li>Initialize two pointers: low (starting at index 0) and high (starting at index n-1).</li>
<li>Calculate the mid index as the average of low and high.</li>
<li>Repeat the following steps until low is less than or equal to high:</li>
<li>If the element at mid matches the key, return the mid index.</li>
<li>If the element at mid is greater than the key, update high to mid-1.</li>
<li>If the element at mid is less than the key, update low to mid+1.</li>
<li>If the loop exits and the element is not found, return "Not Found".</li>
</ol>
<br>
<b>Binary Search (Recursive Method)</b>:
<ol>
<li>Input: A sorted list List, the element to be searched Key, and the current low and high indices.</li>
<li>Calculate the mid index as the average of low and high.</li>
<li>If low is less than or equal to high, perform the following:</li>
<li>If the element at mid matches the key, return the mid index.</li>
<li>If the element at mid is greater than the key, call the function recursively with high = mid-1.</li>
<li>If the element at mid is less than the key, call the function recursively with low = mid+1.</li>
<li>If low becomes greater than high, return "Not Found".</li>
</ol>
<br>
<b>Output Format</b>:
<ul>
<li>If the element is found: The program will print the index of the element in the array (0-based index).</li>
<li>If the element is not found: The program will print a message: "Element Not Found!"</li>
</ul>
<br>
<b>Time Complexity</b>:
<br>
<b>Iterative Binary Search (Iteration)</b>:<br>
<ul>
<li>Best case: O(1) (if the element is found at the middle index).</li>
<li>Worst case: O(log n) (binary search reduces the search space by half in each iteration).</li>
</ul>
<br>
<b>Recursive Binary Search (Recursion)</b>:<br>
<ul>
<li>Best case: O(1) (if the element is found at the middle index).</li>
<li>Worst case: O(log n) (similar to iterative binary search, each recursive call halves the search space).</li>
</ul>
<ul>
<li>Since both approaches reduce the search space by half in each iteration or recursive call, the time complexity for both methods is logarithmic: O(log n).</li>
</ul>