"""
Aim: To find the indexes of such triplet of elements in which first two elements of array adds upto third element.
1. Array has been made through loops.
"""

import random

n=random.randint(5,15)
Array=[]
for i in range(n):
    j=random.randint(1,n+5)
    if(j not in Array):
        Array.append(j)
print("Array=",Array,"\n")

print("Index pairs which upholds the eligibility criteria are:")
for i in range(len(Array)):
    for j in range(i+1,len(Array)):
        for k in range(len(Array)):
            if(Array[i]+Array[j]==Array[k]):
                print(i," ",j," ",k)
