m = int(input("Enter the size of first list: "))
n = int(input("Enter the size of second list: "))
list = []
print("Enter elements of first list: ")
for i in range(0,m):
    x = int(input())
    list.append(x)
print("Enter elements of second list: ")
for i in range(0,n):
    x = int(input())
    if x not in list:
        list.append(x)
print("The union of two list is: ")
for i in range(len(list)):
    print(list[i],end=" ")

