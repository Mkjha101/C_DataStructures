'''
Aim: To find the number missing in the list of N-consecutive numbers, without using any Arithmetic Operation
'''

import random

'''
def Binary(n):
    string=''
    while(n!=0):
        rem=n%2
        n//=2
        string=str(rem)+string
        # print(string)
    string=int(string)
    return string
'''

def Array(n):
    List=[]
    for i in range(n):
        List.append(i+1)
    Index=random.randint(1,(len(List)-1))
    List.pop(Index)
    print(List)
    return List

n=random.randint(10,25)
print("1. n = ",n)
Array=Array(n)
print("2. List = ", Array)

'''
def DB(Data):
    if(type(Data)==list):
        for i in range(len(Data)):
            Data[i]=Binary(Data[i])
    elif(type(Data)==int):
        Data=Binary(Data)
    return Data
'''
NewList=[]
for i in range(len(Array)):
    NewList.append(Array[i]%2)

print("3. Binary List = ",NewList)

i=0
while(i!=len(NewList)):
    if(NewList[i]^NewList[i+1]==0):
        break
    i+=1
print("Missing number is: ",Array[i]+1)