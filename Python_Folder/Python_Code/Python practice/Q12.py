n = int(input("Enter the size of the list: "))
l = []
d = {}
print("Enter Elements: ")
for i in range(0,n):
    a = int(input())
    l.append(a)
m = int(input("Enter the size of the dictionary: "))
print("Enter the dictionary: ")
for i in range(0,m):
    a = input()
    b = int (input())
    d[a] = b
print("The list is : ",l)
print("The dictionary is: ",d)
a = d.values()
del l
l = list(a)

print("After modifying: ",l)
