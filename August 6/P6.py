#Aim: To find the sum of all elements of a given array.

import random

def sumI(List:list):
    Ans=0
    for i in range(len(List)):
        Ans+=List[i]
    return Ans

def sumR(List: list,n: int):
    if(n!=0):
        return List[n-1]+sumR(List,n-1)
    else:
        return 0

def array(size):
    a=[]
    for i in range (1,size):
        a.append(random.randint(1,size))
    a.append(size+100)
    return a

n=int(input("Enter number of elements:\t"))
Method= int(input("\nEnter 1 for iterative method and 2 for recursive method: "))
List=array(n)

if(Method==1):
    Ans=sumI(List)
elif(Method==2):
    Ans=sumR(List,len(List))

print("List =",List)
print("\nSum of all elements of above List is:",Ans)
