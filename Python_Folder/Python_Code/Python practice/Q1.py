try:
    x = int(input("Enter the first no. "))
    y = int(input("Enter the second no. "))
    if x*y<1000:
        print(x*y)
    else:
        print(x+y)
except:
    print("Invalid Input")