#Sorted Array is given in Advance...
Array1=[2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,87,97,101]

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

Key=int(input("\nEnter the element to be searched: "))
Method= int(input("\nEnter 1 for iterative method and 2 for recursive method: "))

if(Method==1):
    Index= Iteration(Array1,len(Array1),Key)
elif(Method==2):
    Index= Recursion(Array1,Key,0,len(Array1)-1)
else:
    print("\nInvalid Input")

if(type(Index)==str):
    print("\nElement",Index,"!")
else:
    print("\nIndex of searched element is",Index,".")