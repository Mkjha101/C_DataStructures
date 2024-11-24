"""
Aim: To plot graph for "Time Complexity" of "Linear Search using Iterative method".
"""

import time
import random
import matplotlib.pyplot as plt

def array(size):
    a=[]
    for i in range (1,size):
        a.append(random.randint(1,size))
    a.append(size+100)
    return a

def Iteration(List,Key):
    for i in range(len(List)):
        if(List[i]==Key):
            return i
    return "Not Found"

def Task1(n):
    m=float(input("Enter Size multiplier:\t"))
    Table1=tuple()
    T=[]
    N=[]
    Tdiff=0
    while(n<=10**6):
        List=array(n)
        for i in range(100):
            stime=time.time()
            Ans=Iteration(List,List[n-1])
            # print(Ans)
            etime=time.time()
            Tdiff+=(etime-stime)
        Tdiff/=100
        T.append(Tdiff)
        N.append(n)
        n*=m
        n=int(n)
    Table1+=(T,N)
    return Table1

Init=int(input("Enter initial number of Operation: "))
Table=Task1(Init)

y=Table[0]
x=Table[1]
# print("Operations:",x)
# print("Time:",y)

plt.title("Time Complexity for\nLinear Search using Iteration")
plt.plot(x,y)
plt.xlabel("Observations")
plt.ylabel("Time")
plt.show()