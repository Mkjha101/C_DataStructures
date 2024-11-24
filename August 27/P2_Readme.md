<h2>Aim</h2>
<p>The aim of this program is to calculate the memory address of a specific element in a 2D array based on the 
row-major and column-major storage orders. Given the base address of the array, element size, and indices of the element 
in the 2D array, the program computes and displays the memory address.</p>

<h2>Algorithm</h2>
<ol>
    <li>The user is prompted to enter the number of rows and columns of the 2D array.</li>
    <li>The program then accepts the elements of the array.</li>
    <li>The user is asked to input the row and column indices for which the memory address should be calculated.</li>
    <li>The user chooses the storage order: row-major or column-major.</li>
    <li>If the row-major order is selected, the address is calculated using the formula:
        <pre>Address = Base Address + Element Size * ((Row * Number of Columns) + Column)</pre></li>
    <li>If the column-major order is selected, the address is calculated using the formula:
        <pre>Address = Base Address + Element Size * ((Column * Number of Rows) + Row)</pre></li>
    <li>The computed address for the specified element is displayed.</li>
</ol>

<h2>Output Format</h2>
<ul>
    <li>The program first prints the base address of the array and the address of the specified element in either row-major or column-major order, depending on the user's choice.</li>
    <li>The address is calculated and displayed in a format similar to:
        <pre>Base Address: 100</pre>
        <pre>Address of Element: (calculated address)</pre></li>
</ul>

<h2>Example</h2>
<p>Consider an array with 2 rows and 3 columns:</p>
<pre>
    1  2  3
    4  5  6
</pre>
<p>If the user enters <code>row = 1</code> and <code>col = 2</code>, and selects row-major order, the address calculation will be:</p>
<pre>
    Base Address: 100
    Address of Element: (calculated address)
</pre>
<p>Similarly, if column-major order is chosen, the address will be calculated using the column-major formula.</p>

<h2>Time Complexity</h2>
<p>The time complexity of this program is O(1) for calculating the address, as it only involves basic arithmetic operations. 
The input of elements and indices is O(n), where n is the total number of elements in the array, but the address calculation 
itself does not depend on the size of the array.</p>
