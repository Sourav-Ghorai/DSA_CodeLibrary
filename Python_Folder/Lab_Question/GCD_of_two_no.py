m = int(input("Enter the 1st no. "))
n = int(input("Enter the 2nd no. "))
i = 1; g = 1
while i<=m or i <=n:
    if m%i==0 and n%i==0:
        g = i
    i = i+1
print("The GCD of these two no. is: ",g)