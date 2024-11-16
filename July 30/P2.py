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
    print("List = ",List)
    return List

n=random.randint(6,25)
# print("1. n = ",n)
Array=Array(n)
# print("2. List = ", Array)

'''
def DB(Data):
    if(type(Data)==list):
        for i in range(len(Data)):
            Data[i]=Binary(Data[i])
    elif(type(Data)==int):
        Data=Binary(Data)
    return Data
'''
LastBit=[]
for i in range(len(Array)):
    LastBit.append(Array[i]%2)
print("NewList = ",LastBit,'\n')

# print("3. Binary List = ",NewList)

i=0
while(i!=len(LastBit)):
    if(i==len(LastBit)-1):
        print("No missing Number!!")
        break
    if(LastBit[i]^LastBit[i+1]==0):
        print("Missing number is: ",Array[i]+1)
        break
    i+=1