import random
def Binary(n):
    string=''
    while(n!=0):
        rem=n%2
        n//=2
        string=str(rem)+string
        # print(string)
    string=int(string)
    return string

n=int(input("Enter any decimal number:"))
Bin=Binary(n)
print("\nBinary representation of",n,"is:",Bin,"\n")

def Decimal(n):
    decimal=0
    if(type(n)==int):
        n=str(n)
    for i in range(len(n)):
        temp=(int(n[len(n)-i-1]))*(2**i)
        decimal+=temp
    return decimal

new=random.randint(4,478)
Bin1=Binary(new)
Deci=Decimal(Bin1)
print("Decimal value of",Bin1,"is",Deci)