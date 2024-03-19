n = int(input("Enter the length of the tuple: "))
l = []
print("Enter the elements in the tuple: ")
for i in range (n):
    a = int (input())
    l.append(a)
t = tuple(l)
print("The tuple is: ",t)
s = set(l)
s = list(s)
for i in range (len(s)):
    a = l.count(s[i])
    print("The frequency of %d is: "%(s[i]),a)