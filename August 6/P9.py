# Aim: To make a program for executing the function f(x) = a0 + a1*x^1 + + a2*x^2 + ... + + aN*x^N, using Iterative and Recursive methods.

"""
For constant coefficients, array will be passed with those coefficients. Array will be already given.
"""

Array=[8,6,2]

def Function(Array: list, x: int, i=len(Array)):
    if(i==0):
        return 0
    else:
        return Array[i-1]*(x**(i-1))+Function(Array,x,i-1)

num=int(input("Enter value for x: "))
Answer = Function(Array,num)

print("f(x) = ",end='')
for i in range(len(Array)):
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
        print(Array[i],"*",num,"^(",i,") + ",end='',sep='')
    else:
        print(Array[i],"*",num,"^(",i,") = ",Answer, sep='')