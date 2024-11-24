#Aim: To find the sum of some elements of an array, starting from a fixed index to last index

import random

def sumI(List:list,n:int):
    Ans=0
    for i in range(n,len(List)):
        Ans+=List[i]
    return Ans

def sumR(List: list,n: int, i: int):
    if(n!=i and n<len(List)):
        return List[n-1]+sumR(List,n-1,i)
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
StartingIndex=int(input("\nEnter from which index, sum has to be taken: "))

if(Method==1):
    Ans=sumI(List,StartingIndex)
elif(Method==2):
    Ans=sumR(List,len(List),StartingIndex)

print("List =",List)
print("\nSum of required elements of above List is:",Ans)
