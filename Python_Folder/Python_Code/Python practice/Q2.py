try:
    l = []
    n = int(input("Enter size of the list: "))
    for i in range(0,n):
        a = float(input())
        l.append(a)
    print("And the list is: ",l)
    for i in range(0,n):
        if l[i]%15==0:
            print(l[i],end=" ")
except:
    print("Invalid input")