<h2>Aim:</h2>
<p>To analyze and plot the time complexity of the binary search algorithm using a recursive method, and compare it with the iterative method.</p>

<h2>Algorithm:</h2>
<h3>1. Iterative Method:</h3>
<ol>
    <li>Initialize <code>low</code> to 0 and <code>high</code> to the size of the list minus one.</li>
    <li>Calculate the middle index <code>mid</code> as <code>(low + high) // 2</code>.</li>
    <li>Compare the middle element with the key:</li>
    <ul>
        <li>If equal, return <code>mid</code>.</li>
        <li>If the key is smaller, update <code>high = mid - 1</code>.</li>
        <li>If the key is larger, update <code>low = mid + 1</code>.</li>
    </ul>
    <li>Repeat steps 2–3 until <code>low</code> exceeds <code>high</code>, and return "Not Found" if the key is not in the list.</li>
</ol>

<h3>2. Recursive Method:</h3>
<ol>
    <li>Base case: If <code>low</code> exceeds <code>high</code>, return "Not Found".</li>
    <li>Calculate the middle index <code>mid</code> as <code>(low + high) // 2</code>.</li>
    <li>Compare the middle element with the key:</li>
    <ul>
        <li>If equal, return <code>mid</code>.</li>
        <li>If the key is smaller, recursively call the function with updated <code>high = mid - 1</code>.</li>
        <li>If the key is larger, recursively call the function with updated <code>low = mid + 1</code>.</li>
    </ul>
</ol>

<h2>Input Format:</h2>
<p>The program prompts the user for:</p>
<ul>
    <li><strong>Initial number of operations:</strong> Starting size of the array.</li>
    <li><strong>Method:</strong> Choose <code>1</code> for iterative or <code>2</code> for recursive method.</li>
</ul>

<h2>Output Format:</h2>
<p>The program plots a graph displaying:</p>
<ul>
    <li><strong>X-axis:</strong> The size of the array (number of elements).</li>
    <li><strong>Y-axis:</strong> The average time taken for binary search operations.</li>
</ul>

<h2>Time Complexity:</h2>
<p>
    The time complexity of the binary search algorithm is <strong>O(log n)</strong> 
    for both iterative and recursive methods. This is due to the continuous halving of the search space.
</p>