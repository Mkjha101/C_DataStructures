<h2>Aim:</h2>
<p>
    To generate all possible combinations of 'F' and 'T' for a given length <code>n</code>, using recursion.
</p>
<h2>Algorithm:</h2>
<ol>
    <li>Take input <code>n</code>, the number of combinations to generate.</li>
    <li>Initialize an empty list <code>P</code> to store the current pattern.</li>
    <li>Use a recursive function <code>Pattern</code> with parameters:
        <ul>
            <li><code>Bool</code>: The current list of combinations.</li>
            <li><code>k</code>: The current position in the pattern.</li>
            <li><code>n</code>: The total number of positions.</li>
        </ul>
    </li>
    <li>Base Case:
        <ul>
            <li>If <code>k > n</code>, join and print the current combination from the <code>Bool</code> list.</li>
        </ul>
    </li>
    <li>Recursive Case:
        <ul>
            <li>Append or update the <code>k</code>-th element of <code>Bool</code> to 'T'.</li>
            <li>Recursively call the function for the next position <code>k+1</code>.</li>
            <li>Update the <code>k</code>-th element of <code>Bool</code> to 'F'.</li>
            <li>Recursively call the function for the next position <code>k+1</code>.</li>
        </ul>
    </li>
</ol>
<h2>Output Format:</h2>
<p>
    The program outputs all possible combinations of 'F' and 'T' in lexicographical order for the given value of <code>n</code>.
</p>
<h2>Examples</h2>
<h3>Input:</h3>
<pre>
Enter number of combinations:
2
</pre>
<h3>Output:</h3>
<pre>
FF
FT
TF
TT
</pre>
<h3>Input:</h3>
<pre>
Enter number of combinations:
3
</pre>
<h3>Output:</h3>
<pre>
FFF
FFT
FTF
FTT
TFF
TFT
TTF
TTT
</pre>
<h2>Time Complexity:</h2>
<p>
    The time complexity of the recursive function is <code>O(2^n)</code>, where <code>n</code> is the length of the pattern.
</p>