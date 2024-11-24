# Aim: To make a program for executing the function f(x) = a0 + a1*x^1 + + a2*x^2 + ... + + aN*x^N, using Iterative methods.

"""
For constant coefficients, array will be passed with those coefficients. Array will be already given.
"""

Array=[8,6,2,4,5,3,9,1]

def Function(Array, x):
    sum=0
    print("f(x) = ",end='')
    if len(Array)==0:
        print(0)
    for i in range(len(Array)):
        sum+=(Array[i]*x**i)
        '''
        if(i==0):
            print("a",i," + ",end='',sep='')
        elif(i<len(Array)-1):
            print("a",i,"*","x^(",i,") + ",end='',sep='')
        else:
            print("a",i,"*","x^(",i,") = ",sum,sep='')
        '''

        if(i==0):
            print(Array[i]," + ",end='',sep='')
        elif(i<len(Array)-1):
            print(Array[i],"*",x,"^(",i,") + ",end='',sep='')
        else:
            print(Array[i],"*",x,"^(",i,") = ",sum, sep='')
        
num=int(input("Enter value for x: "))
Function(Array,num)