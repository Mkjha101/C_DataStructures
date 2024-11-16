'''
Aim= To raise a base to some other exponent, n, in less than 'n' iterations
'''

Base=int(input("Enter base: "))
Exp=int(input("Enter Exponent: "))
Copy=Base
Count=0
if(Exp==0):
    Copy=1
else:
    for i in range(Exp-1):
        Copy*=Base
        Count+=1
print("\nRaising ", Base, " to power ", Exp, " we\'ll get: ", Copy, sep="")
print("Number of Iterations:",Count)