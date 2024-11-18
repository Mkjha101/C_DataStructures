Aim = In this question we have given the coordinate (x,y) in which x is shown with the help of the x-axis and y is shown with the help of some values of the given array , a[i]. Now we have to find the maximum volume occupied by the container formed with the edges. In which the first edge is formed with the help of (x,0)and (x,a[i]) while the other edge is formed with the help of (m,0) and (m, a[j]). where x,m are the points on the x-axis and i,j are the indexes of the array.
<br>
Algorithm:
<br>
<ul>
<li>
First we will make two functions of finding the volume of the figure, one for the bottom cylinder and other for the remaining half cylinder which will give the volume of the respective shape by taking the argument as radius and height.
</li>
<li>
In the main funtion we are given the list of elements of the array
</li>
<li>
Now we have started the <b>for loop</b> from i = 0 to n.<br>
And another nested for loop starting from j=i+1 to n.
</li>
<li>
Now we find the radius by taking half of j-i.
</li>
<li>
For finding the height of the bottom cylinder and half upper cylinder we will apply the <b>if and else condition</b> by checking (<u>arr[i] is greater or lesser than arr[j]</u>)
</li>
<li>
Now we will find the volume of each case by adding both the function cylinder and remaining.
</li>
<li>
Now we will check whether the large < volume if yes then large = volume.
</li>
</ul>
<br>
Output = Now print the max volume stored as large.