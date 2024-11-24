<h2>Aim</h2>
<p>The aim of this program is to perform various operations on an array, including searching, inserting, deleting, 
updating, sorting, and clearing elements. The program uses standard functions like binary search for efficient searching 
and bubble sort for sorting the array. The operations allow the user to manage the array and perform common array manipulations 
interactively.</p>

<h2>Algorithm</h2>
<ol>
    <li><b>Search:</b> The program uses binary search to find an element in a sorted array. If the element is found, 
        its index is returned. Otherwise, it returns -1.</li>
    <li><b>Insert:</b> To insert an element, the program shifts elements in the array to make space for the new element at 
        the specified index and increments the array size. After inserting, the array is re-sorted using bubble sort.</li>
    <li><b>Delete:</b> The program searches for the value to be deleted, shifts all elements after the deleted value, 
        and reduces the array size. It re-sorts the array after deletion.</li>
    <li><b>Update:</b> The program allows updating an element at a specified position with a new value, followed by re-sorting the array.</li>
    <li><b>Clear:</b> The program sets all array elements to zero and displays the cleared array.</li>
    <li><b>Sort:</b> The array is sorted in ascending order using the bubble sort algorithm.</li>
    <li><b>Display:</b> The array is displayed with its current elements.</li>
</ol>

<h2>Operations</h2>
<ul>
    <li><b>Search:</b> Search for a key in the array using binary search. It returns the index of the key if found.</li>
    <li><b>Insert:</b> Insert a new element at a specific index and then sort the array.</li>
    <li><b>Delete:</b> Remove a specified element from the array and re-sort it.</li>
    <li><b>Clear:</b> Clears all elements in the array by setting them to zero.</li>
    <li><b>Sort:</b> Sorts the array in ascending order using the bubble sort algorithm.</li>
    <li><b>Update:</b> Update the value at a specific position in the array and then sort the array.</li>
    <li><b>Display:</b> Display the current elements of the array.</li>
</ul>

<h2>Output Format</h2>
<ul>
    <li>When performing any operation, the array will be displayed in its current state after the operation.</li>
    <li>For search, if the element is found, the index will be shown. If not, a "Key not found" message will appear.</li>
    <li>When inserting, deleting, or updating, the array will be updated and re-sorted, then displayed again.</li>
    <li>The program allows continuous operation until the user opts to exit the program.</li>
</ul>

<h2>Example</h2>
<p>Consider the following array of integers: <code>[10, 20, 30, 40, 50]</code>.</p>
<ul>
    <li><b>Search:</b> If searching for 30, the program will output "Key found at index 2".</li>
    <li><b>Insert:</b> If inserting 25 at index 2, the array will become <code>[10, 20, 25, 30, 40, 50]</code>.</li>
    <li><b>Delete:</b> If deleting 40, the array will become <code>[10, 20, 25, 30, 50]</code>.</li>
    <li><b>Update:</b> If updating the element at position 1 to 35, the array will become <code>[10, 35, 25, 30, 50]</code>.</li>
    <li><b>Clear:</b> The array will become <code>[0, 0, 0, 0, 0]</code> after clearing.</li>
</ul>

<h2>Time Complexity</h2>
<ul>
    <li><b>Search:</b> Binary search has a time complexity of O(log n), where n is the size of the array.</li>
    <li><b>Insert:</b> Inserting an element takes O(n) for shifting elements, and sorting the array with bubble sort takes O(n^2).</li>
    <li><b>Delete:</b> Deletion has a time complexity of O(n) for shifting elements, and sorting takes O(n^2).</li>
    <li><b>Update:</b> Updating an element takes O(1) for the update operation, and sorting the array takes O(n^2) using bubble sort.</li>
    <li><b>Sort:</b> Sorting using bubble sort has a time complexity of O(n^2), where n is the number of elements.</li>
</ul>