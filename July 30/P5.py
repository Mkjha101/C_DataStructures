def Volume(r,h,ch):
    Volume=3.14*r*r*h
    if(ch=='cylinder'):
        return Volume
    elif(ch=='remaining'):
        return Volume/2

n=int(input("Enter number of elements: "))
Array1=[]
for i in range(n):
    print("Enter element",i+1,": ",end="")
    a=int(input())
    Array1.append(a)

LargeVol=0
HeightC=0; HeightR=0; Radius=0

for i in range(n-1):
    for j in range(i+1,n):
        Radius=(j-i)/2
        if(Array1[j]<Array1[i]):
            HeightC=Array1[j]
            HeightR=Array1[i]-Array1[j]
        else:
            HeightC=Array1[i]
            HeightR=Array1[j]-Array1[i]
        V = Volume(Radius,HeightC,'cylinder') + Volume(Radius,HeightC,'remaining')
        #print(V)
        if(LargeVol<V):
            LargeVol=V
        #print(LargeVol)
print("Your input Array is:",Array1,"\n")
print("The max volume is:", LargeVol)