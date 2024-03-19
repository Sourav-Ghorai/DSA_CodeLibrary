r1 = int (input("Enter the no. of row of the first matrix: "))
c1 = int (input("Enter the no. of column of the first matrix: "))
r2 = int (input("Enter the no. of row of the second matrix: "))
c2 = int (input("Enter the no. of column of the second matrix: "))
if c1==r2:
    list1 = []
    list2 = []
    list3 = []
    list = []
    print("Enter elements of first matrix")
    for i in range(0,r1):
        list.clear()
        for j in range(0,c1):
            a = int (input())
            list.append(a)
        list1.append(list)
    print("Enter elements of second matrix")
    for i in range(0,r2):
        list.clear()
        for j in range(0,c2):
            a = int (input())
            list.append(a)
        list2.append(list)
    for i in range(r1):
        list.clear()
        for j in range(c2):
            list.append(0)
        list3.append(list)
    
    for i in range(0,r1):
        list.clear()
        for j in range(0,c2):
            s = 0
            for k in range (0,r2):
                s+=list1[i][k]*list2[k][j]
            list3[i][j] = s
    print("The result matrix is: ")
    for i in range(r1):
        for j in range(c2):
            print(list3[i][j],end = " ")
        print()
else:
    print("Multiplication is not possible.")
    
