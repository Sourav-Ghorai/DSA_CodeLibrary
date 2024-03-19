n = int(input("Enter the no. of rows: "))
c = 2*n-1
for i in range(0,n,1):
    for j in range(0,i+1-1,1):
        print("  ",end="")
    for k in range(0,c):
        print("* ",end="")
    print()
    c = c-2


