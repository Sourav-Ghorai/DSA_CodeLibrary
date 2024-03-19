n = int (input("Enter the principal amount: "))
x = (200000*10)/100
y = (800000*12)/100
if n<= 200000:
    i = (n*10)/100
    print ("The simple interest is = ",i)
elif n>200000 and n<=1000000:
    i = x + ((n-200000)*12)/100
    print ("The simple interest is = ",i)
elif n>1000000:
    i = x + y + ((n - 1000000)*15)/100
    print ("The simple interest is = ",i) 
