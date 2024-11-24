'''
In  this program, we have to print a pattern using recursion. It is somewhat different as when n=2  we have to print FF FT TF TT  and
when we have n=3  we have to print FFF FFT FTF TFF FTT TFT TTF TTT
 '''
def Pattern(Bool: list, k: int ,n: int):
    if(k>n):
        for i in range(k-1):
            print(Bool[i],end='')
        print('\n')
    else:
        Bool[k]='T'; Pattern(Bool, k+1, n)
        Bool[k]='F'; Pattern(Bool, k+1, n)

n=int(input("Enter the value of n: "))
P=[]
for i in range(n):
    P.append(i)
Pattern(P,1,n)