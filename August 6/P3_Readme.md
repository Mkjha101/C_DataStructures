<h1><b>Aim:</b></h1>
This program calculates the value of the polynomial function 𝑓(𝑥) = 𝑎0 + 𝑎1⋅𝑥^1 +𝑎2⋅𝑥^2 + ⋯ +𝑎𝑁⋅𝑥^𝑁 using an Iterative Method. The coefficients of the polynomial are stored in an array, and the value of 𝑥 is input by the user.
<br>
<b>Algorithm</b>:<br>
<b>Iterative Method</b>:<br>
<ol>
<li>Input: A list Array containing the coefficients of the polynomial (from 𝑎0 to 𝑎N) and the value of 𝑥.</li>
<li>Initialize a variable sum to store the result.</li>
<li>Iterate over the coefficients array:<br>
<ul>
<li>
For each coefficient, calculate the term 𝑎𝑖⋅𝑥^𝑖 and add it to the sum.
</li>
<li>
Print the polynomial expression as it is evaluated.
</li>
</ul>
</li>
<li>Return or print the final value of the polynomial.</li>
</ol><br>
<h1>
<b>Example Execution<b>:
</h1><br>
If the array Array = [8, 6, 2, 4, 5, 3, 9, 1] and 𝑥=2, the program will calculate the polynomial:
<center><b>𝑓(𝑥)=8+6⋅𝑥1+2⋅𝑥2+4⋅𝑥3+5⋅𝑥4+3⋅𝑥5+9⋅𝑥6+1⋅𝑥7</b></center>
Then it will output the result of this sum for <b>𝑥=2</b>.
<br>
<h1><b>Output Format</b>:</h1><br>
The program will print the polynomial expression along with the corresponding terms and the result of the polynomial for the given 𝑥.
<br>
<h1><b>Time Complexity</b>:</h1><br>
<ul>
<li>
Iterative Method: The <u>time complexity is <b>O(N)</b></u>, where 𝑁 is the number of coefficients in the array, as we iterate over each coefficient once and perform a constant number of operations for each.
</li>
</ul>
