<h2>Aim:</h2>
<p>To compute the sum of elements in a given array, starting from a specified index to the last index, using both iterative and recursive methods.</p>

<h2>Algorithm:</h2>
<h3>1. Iterative Method:</h3>
<ol>
    <li>Initialize a variable <code>Ans</code> to 0.</li>
    <li>Loop through the array from the given starting index to the last index.</li>
    <li>Add each element to <code>Ans</code>.</li>
    <li>Return the final value of <code>Ans</code> as the sum.</li>
</ol>

<h3>2. Recursive Method:</h3>
<ol>
    <li>Base case: If the current index equals the specified starting index or exceeds the array bounds, return 0.</li>
    <li>Recursive case: Add the current element to the sum of elements starting from the next index.</li>
    <li>Return the computed sum.</li>
</ol>

<h2>Input Format:</h2>
<p>The program prompts the user for:</p>
<ul>
    <li><strong>Number of elements:</strong> The size of the array to be generated.</li>
    <li><strong>Method:</strong> Choose <code>1</code> for iterative or <code>2</code> for recursive method.</li>
    <li><strong>Starting index:</strong> The index from which the sum computation should begin.</li>
</ul>

<h2>Output Format:</h2>
<p>The program displays the following:</p>
<ul>
    <li>The generated array.</li>
    <li>The sum of elements from the specified starting index to the last index.</li>
</ul>

<h2>Time Complexity:</h2>
<p>
    The time complexity for both methods is <strong>O(k)</strong>, 
    where <code>k</code> is the number of elements from the starting index to the last index. This is a subset of the array size, <code>n</code>.
</p>