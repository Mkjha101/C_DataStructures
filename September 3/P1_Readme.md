<h2>Aim</h2>
<p>The aim of this program is to demonstrate the creation of a Singly Linked List in C++. It involves defining a <code>Node</code> structure to represent each node in the list and provides functionality for printing the linked list.</p>

<h2>Algorithm</h2>
<ol>
    <li>Define a <code>Node</code> structure with two fields: <code>data</code> (integer value) and <code>next</code> (pointer to the next node).</li>
    <li>Implement a constructor for the <code>Node</code> structure to initialize the <code>data</code> value and set <code>next</code> to <code>nullptr</code>.</li>
    <li>Create multiple <code>Node</code> instances dynamically using <code>new</code> and link them together using the <code>next</code> pointer.</li>
    <li>Use a function <code>print</code> to traverse the linked list starting from the head, printing each node’s <code>data</code> until reaching the end (when <code>next</code> is <code>nullptr</code>).</li>
</ol>

<h2>Output Format</h2>
<p>The program will output the data of each node in the linked list, separated by spaces. For example:</p>
<pre>
Linked List is:    30 40 50 60
</pre>

<h2>Time Complexity</h2>
<p>The time complexity of the <code>print</code> function is <strong>O(n)</strong>, where <code>n</code> is the number of nodes in the linked list. This is because we traverse the entire list once, printing each node’s data.</p>
