<h2>Aim:</h2>
<p>To compute the sum of all elements in a given array using both iterative and recursive methods.</p>

<h2>Algorithm:</h2>
<h3>1. Iterative Method:</h3>
<ol>
    <li>Initialize a variable <code>Ans</code> to 0.</li>
    <li>Iterate through the array elements using a loop.</li>
    <li>Add each element of the array to <code>Ans</code>.</li>
    <li>Return the final value of <code>Ans</code> as the sum.</li>
</ol>

<h3>2. Recursive Method:</h3>
<ol>
    <li>Base case: If the array size <code>n</code> is 0, return 0.</li>
    <li>Recursive case: Add the last element of the array <code>List[n-1]</code> to the sum of the remaining array.</li>
    <li>Return the computed sum.</li>
</ol>

<h2>Input Format:</h2>
<p>The program prompts the user for:</p>
<ul>
    <li><strong>Number of elements:</strong> The size of the array to be generated.</li>
    <li><strong>Method:</strong> Choose <code>1</code> for iterative or <code>2</code> for recursive method.</li>
</ul>

<h2>Output Format:</h2>
<p>The program displays the following:</p>
<ul>
    <li>The generated array.</li>
    <li>The sum of all elements in the array.</li>
</ul>

<h2>Time Complexity:</h2>
<p>
    The time complexity for both methods is <strong>O(n)</strong>, where <code>n</code> is the size of the array, as each element is processed once.
</p>