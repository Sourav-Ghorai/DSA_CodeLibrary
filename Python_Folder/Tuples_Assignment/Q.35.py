n = int(input("Enter the size of the tuple: "))
l = []
s = 0
print("Enter elements in the tuple: ")
for i in range (n):
    a = int(input())
    l.append(a)
    s = s+a
t = tuple(l)
print("The tuple is: ",t)
print("And the mean of the tuple is: ",s/n)