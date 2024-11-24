<h2>Aim:</h2>
<p>To analyze and plot the time complexity of the Linear Search algorithm implemented using both iterative and recursive methods.</p>

<h2>Algorithm:</h2>
<h3>1. Iterative Method:</h3>
<ol>
    <li>Initialize <code>low</code> and <code>high</code> pointers.</li>
    <li>Compute the mid-point of the array.</li>
    <li>Compare the mid-point value with the key:
        <ul>
            <li>If equal, return the index.</li>
            <li>If smaller, move the <code>low</code> pointer to <code>mid+1</code>.</li>
            <li>If larger, move the <code>high</code> pointer to <code>mid-1</code>.</li>
        </ul>
    </li>
    <li>Repeat until the key is found or <code>low > high</code>.</li>
</ol>

<h3>2. Recursive Method:</h3>
<ol>
    <li>Base case: If <code>low > high</code>, return "Not Found".</li>
    <li>Compute the mid-point of the array.</li>
    <li>Compare the mid-point value with the key:
        <ul>
            <li>If equal, return the index.</li>
            <li>If smaller, recursively call the function with <code>low=mid+1</code>.</li>
            <li>If larger, recursively call the function with <code>high=mid-1</code>.</li>
        </ul>
    </li>
</ol>

<h2>Output Format:</h2>
<p>The program generates a plot with the following details:</p>
<ul>
    <li><strong>Title:</strong> Time Complexity for Linear Search using Iteration/Recursion</li>
    <li><strong>X-axis:</strong> Observations (Array size)</li>
    <li><strong>Y-axis:</strong> Average Time (in seconds)</li>
</ul>
<p>The graph visualizes how the time complexity varies with increasing input size.</p>

<h2>Time Complexity:</h2>
<p>
    The time complexity of Linear Search using both iterative and recursive methods is <strong>O(n)</strong>, 
    where <code>n</code> is the size of the array. The time complexity remains the same, though the recursive method may have additional overhead due to function calls.
</p>