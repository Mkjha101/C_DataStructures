<h2>Aim:</h2>
    <p>
        To create a program to evaluate the polynomial function <code>f(x) = a<sub>0</sub> + a<sub>1</sub>*x<sup>1</sup> + a<sub>2</sub>*x<sup>2</sup> + ... + a<sub>N</sub>*x<sup>N</sup></code>, using both iterative and recursive methods.
    </p>
<h2>Algorithm:</h2>
<ol>
    <li>Define a recursive function <code>Function</code> with parameters:
        <ul>
            <li><code>Array</code>: List of coefficients of the polynomial.</li>
            <li><code>x</code>: The value for which the polynomial is to be evaluated.</li>
            <li><code>i</code>: The current index in the coefficient array, initialized to the length of the array.</li>
        </ul>
    </li>
    <li>Base Case:
        <ul>
            <li>If <code>i == 0</code>, return 0 (end of recursion).</li>
        </ul>
    </li>
    <li>Recursive Case:
        <ul>
            <li>Return the current term <code>Array[i-1] * (x ** (i-1))</code> added to the result of the recursive call with <code>i-1</code>.</li>
        </ul>
    </li>
    <li>Display the polynomial and the calculated result using a formatted output.</li>
</ol>
<h2>Input:</h2>
<p>
    The input includes:
    <ul>
        <li><code>Array</code>: A predefined list of coefficients.</li>
        <li><code>x</code>: The value for which the function <code>f(x)</code> is to be evaluated, entered by the user.</li>
    </ul>
</p>
<h2>Output:</h2>
<p>
    The program displays:
    <ul>
        <li>The polynomial in its expanded form.</li>
        <li>The calculated value of <code>f(x)</code>.</li>
    </ul>
</p>
<h2>Examples</h2>
<h3>Input:</h3>
<pre>
Array = [8, 6, 2]
Enter value for x: 3
</pre>
<h3>Output:</h3>
<pre>
f(x) = 8 + 6*3^(1) + 2*3^(2) = 38
</pre>
<h2>Time Complexity:</h2>
<p>
    The time complexity of this program is <code>O(n)</code>, where <code>n</code> is the length of the coefficient array.
</p>