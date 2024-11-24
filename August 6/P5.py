"""
Aim: To plot graph for "Time Complexity" of "Linear Search using Recursive method".
"""

import time
import matplotlib.pyplot as plt

def array(size):
    a=[]
    for i in range (1,size):
        a.append(i)
    a.append(size+100)
    return a

# Binary search Function for Iterative Process
def Iteration(List, n, Key):
    low=0
    high=n-1
    mid=low+(high-low)//2
    while(low<=high):
        if(List[mid]==Key):
            return mid
        elif(List[mid]>Key):
            high=mid-1
        else:
            low=mid+1
        mid=(low+high)//2
    return "Not Found"

# Binary Search Function for Recursive Process
def Recursion(List, Key, low, high):
    mid=(low+high)//2
    if(low<=high):
        if(List[mid]==Key):
            return mid
        elif(List[mid]>Key):
            return Recursion(List, Key, low, mid-1)
        else:
            return Recursion(List, Key, mid+1, high)
    return "Not Found"

def Task1(n,M):
    m=1500
    Table1=tuple()
    T=[]
    N=[]
    Tdiff=0
    while(n<=10**6):
        List=array(n)
        for i in range(100):
            stime=time.time()
            if(M==1):
                Ans=Iteration(List,len(List),List[n-1])
            else:
                Ans=Recursion(List,List[n-1],0,len(List))
            # print(Ans)
            etime=time.time()
            Tdiff+=(etime-stime)
        Tdiff/=100
        T.append(Tdiff)
        N.append(n)
        n+=m
        n=int(n)
    Table1+=(T,N)
    return Table1

Init=int(input("Enter initial number of Operation: "))
Method= int(input("\nEnter 1 for iterative method and 2 for recursive method: "))
Table=Task1(Init,Method)

y=Table[0]
x=Table[1]
# print("Operations:",x)
# print("Time:",y)

plt.title("Time Complexity for\nLinear Search using Iteration")
plt.plot(x,y)
plt.xlabel("Observations")
plt.ylabel("Time")
plt.show()