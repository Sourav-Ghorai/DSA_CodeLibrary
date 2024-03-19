list = []
n = int(input("Enter the size of the list: "))
for i in range(0,n):
    m = int(input("Enter size of tuple: "))
    l = []
    print("Enter elemnts in tuple: ")
    for i in range(0,m):
        a = input()
        l.append(a)
    list.append(tuple(l))
print("The tuple of list is: ",list)
list1 = [i for i in list if len(i) != 0]
print("The modified list is: ",list1)
list1.popitem()
