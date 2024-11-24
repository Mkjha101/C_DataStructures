'''
In  this program, we have to print a pattern using recursion. It is somewhat different as when n=2  we have to print FF FT TF TT  and
when we have n=3  we have to print FFF FFT FTF TFF FTT TFT TTF TTT
 '''

def Pattern(Bool, k, n):
    if k > n:
        print("".join(Bool))  # Print the current pattern as a string
    else:
        if k <= len(Bool):
            Bool[k - 1] = 'T'  # Update existing element at index k-1 to 'T'
        else:
            Bool.append('T')  # Append 'T' if index k-1 does not exist
        Pattern(Bool, k + 1, n)  # Recursive call

        Bool[k - 1] = 'F'  # Update the same index to 'F'
        Pattern(Bool, k + 1, n)  # Recursive call

n = int(input("Enter number of combinations: "))
P = []
Pattern(P, 1, n)
