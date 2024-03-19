n = int(input("Enter the size of the list: "))
l = []
print("Enter Elements: ")
for i in range(0,n):
    a = int(input())
    l.append(a)
l1 = l[0:3]
l2 = l[3:6]
l3 = l[6:10]
print("Original list: ",l)
print("Chunck 1: ",l1)
print("After reversing it: ",l1[::-1])
print("Chunck 2: ",l2)
print("After reversing it: ",l2[::-1])
print("Chunck 3: ",l3)
print("After reversing it: ",l3[::-1])
