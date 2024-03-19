n = int(input("Enter the size of the list: "))
l = []
for i in range(0,n):
    a = int(input())
    l.append(a)
a = l.pop(4)
l.insert(2,a)
l.append(a)
print(l)