n = int(input("Enter the size of the first list: "))
m = int(input("Enter the size of  the second list: "))
list1 = []
list2 = []
list = []
print("Enter the value of the first list: ")
for i in range(0,n):
    a = int(input())
    list1.append(a)
    if a%2==1:
        list.append(a)
print("Enter the value of the second list: ")
for i in range(0,m):
    a = int(input())
    list2.append(a)
    if a%2==0:
        list.append(a)
print(list1)
print(list2)
print(list)