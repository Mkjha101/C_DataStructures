<h2>Aim</h2>
<p>The aim of this program is to demonstrate the use of different memory allocation techniques in C++. It covers memory allocation using <code>malloc</code>, <code>calloc</code>, and <code>new</code>, as well as memory deallocation using <code>free</code> and <code>delete</code>.</p>

<h2>Algorithm</h2>
<ol>
    <li>Prompt the user to enter the number of elements to allocate memory for.</li>
    <li>Validate the input to ensure that the number is positive. If not, print an error message and exit.</li>
    <li>Allocate memory using <code>malloc</code> to store <code>n</code> integers.</li>
    <li>Allocate memory using <code>calloc</code> to store <code>n</code> integers, initializing the memory to zero.</li>
    <li>Allocate memory using <code>new</code> to store <code>n</code> integers, with error handling.</li>
    <li>Print the memory addresses where the memory has been allocated.</li>
    <li>Deallocate the memory using <code>free</code> (for <code>malloc</code> and <code>calloc</code>) and <code>delete[]</code> (for <code>new</code>).</li>
</ol>

<h2>Output Format</h2>
<p>The program will output the memory addresses allocated by each of the methods: <code>malloc</code>, <code>calloc</code>, and <code>new</code>. If memory allocation fails at any point, an error message is displayed. After memory deallocation, a success message is shown.</p>
<pre>
Enter the number of elements: 5
Memory allocated using malloc at address: 0x7f9d30005300
Memory allocated using calloc at address: 0x7f9d30006300
Memory allocated using new at address: 0x7f9d30007300
Memory deallocated successfully.
</pre>

<h2>Time Complexity</h2>
<p>The time complexity of memory allocation operations like <code>malloc</code>, <code>calloc</code>, and <code>new</code> depends on the size of the memory being allocated. For allocating <code>n</code> elements, the time complexity is approximately <strong>O(n)</strong> since the memory for each element is allocated sequentially. The deallocation using <code>free</code> and <code>delete[]</code> is done in constant time, <strong>O(1)</strong>.</p>
