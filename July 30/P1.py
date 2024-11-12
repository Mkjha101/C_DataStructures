"""
Aim: To find the indexes of such triplet of elements in which first two elements of array adds upto third element.
1. Array has been made through loops.
"""

import random

n=random.randint(5,15)
Array=[]

for i in range(n):
    j=random.randint(1,i+5)
    while(j not in Array):
        Array.append(j)
print(Array)

print("Index pairs which upholds the eligibility criteria are:")
for i in range(n):
    for j in range(i+1,n):
        for k in range(n):
            if(Array[i]+Array[j]==Array[k]):
                print(i," ",j," ",k)