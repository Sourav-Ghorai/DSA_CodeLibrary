n = int (input("Enter the no. of employee: "))
d = {}
l1 = []
l2 = []
for i in range(n):
    s = input("Enter name of employee: ")
    x = int (input("Enter salary of the employee: "))
    l1.append(s)
    l2.append(x)
print("The name of the employee are: ",l1)
print("The salary of the employee are: ",l2)
for i in range(n):
    d[l1[i]] = l2[i]
print("The dictionary is: ",d)