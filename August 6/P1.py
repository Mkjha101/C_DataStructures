def Iteration(List,Key):
    for i in range(len(List)):
        if(List[i]==Key):
            return i
    return "Not Found"

def Recursion(List,i,Key):
    if(List[i]==Key):
        return i
    else:
        if(i>=0):
            return Recursion(List,(i-1),Key)
    return "Not Found"

n=int(input("Enter number of elements: "))
Array1=[]
for i in range(n):
    print("Enter element",i+1,": ",end="")
    a=int(input())
    Array1.append(a)

Key=int(input("\nEnter the element to be searched: "))
Method= int(input("\nEnter 1 for iterative method and 2 for recursive method: "))

if(Method==1):
    Index= Iteration(Array1,Key)
elif(Method==2):
    Index= Recursion(Array1,len(Array1)-1,Key)
else:
    print("\nInvalid Input")

if(type(Index)==str):
    print("\nElement",Index,"!")
else:
    print("\nIndex of searched element is",Index,".")