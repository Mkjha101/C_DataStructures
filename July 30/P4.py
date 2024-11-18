n=int(input("Enter number of elements: "))
Array1=[]
mult=1
for i in range(n):
    print("Enter element",i+1,": ",end="")
    a=int(input())
    mult*=a
    Array1.append(a)
print("Given array is:",Array1)
Array2=[]
for i in range(n):
    Array2.append(mult/Array1[i])
print("Required array is:",Array2)