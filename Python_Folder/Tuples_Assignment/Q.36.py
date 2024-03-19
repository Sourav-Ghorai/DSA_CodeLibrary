n = int(input("Enter the size of the tuple: "))
l = []
l1=[]
l2=[]
print("Enter the elements in the tuple: ")
for i in range (n):
    a = int (input())
    l.append(a)
t = tuple(l)
for i in range(n):
    if(l.count(l[i]) == 1):
        l1.append(l[i])
    elif(l.count(l[i])>1 and l[i] not in l2):
        l2.append(l[i])
print("The tuple is: ",t)
print("The duplicate elements are: ",tuple(l2))
print("And the unique elements are: ",tuple(l1))