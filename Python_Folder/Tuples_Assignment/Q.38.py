n = int (input("Enter the size of the tuple: "))
l = []
l1 = []
l2 = []
print("Enter the elements in the tuple: ")
for i in range(n):
    a = int(input())
    l.append(a)
    if a%2==0:
        l1.append(a)
    else:
        l2.append(a)
l1 = list(set(l1))
l2 = list(set(l2))
print("The tuple is: ",tuple(l))
print("The distinct pairs are: ")
for i in range(len(l1)):
    for j in range (len(l2)):
        print(l1[i],l2[j])
for i in range(len(l1)-1):
    for j in range(i+1,len(l1)):
        print(l1[i],l1[j])


