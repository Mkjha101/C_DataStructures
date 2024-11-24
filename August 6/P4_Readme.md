<h2>Aim:</h2>
<p>To analyze and plot the time complexity of the Linear Search algorithm implemented using the iterative method.</p>

<h2>Algorithm:</h2>
<ol>
    <li>Generate a random array of integers of size <code>n</code>, with the last element being a unique key.</li>
    <li>Implement the linear search algorithm using an iterative method to locate the key in the array.</li>
    <li>Measure the time taken to search for the key, averaging over 100 iterations for accuracy.</li>
    <li>Incrementally increase the size of the array by a user-defined multiplier and repeat steps 1-3.</li>
    <li>Plot the results as a graph with the array size on the x-axis and the average search time on the y-axis.</li>
</ol>

<h2>Output Format:</h2>
<p>The program generates a plot with the following details:</p>
<ul>
    <li><strong>Title:</strong> Time Complexity for Linear Search using Iteration</li>
    <li><strong>X-axis:</strong> Observations (Array size)</li>
    <li><strong>Y-axis:</strong> Average Time (in seconds)</li>
</ul>
<p>The graph visualizes how the time complexity varies with increasing input size.</p>

<h2>Time Complexity:</h2>
<p>
    The time complexity of the Linear Search algorithm is <strong>O(n)</strong>, 
    where <code>n</code> is the size of the array. The search time increases linearly as the input size grows.
</p>
