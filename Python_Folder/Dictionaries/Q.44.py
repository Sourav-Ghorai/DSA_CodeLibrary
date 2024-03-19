n = int(input("Enter the size of the first dictionary: "))
m = int(input("Enter the size of the second dictionary: "))
d = {}
d1={}
d2={}
print("Enter the elements in the first dictionary--")
for i in range(n):
    s = input("Enter key: ")
    a = input("Enter value: ")
    d1[s]=a
print("Enter the elements in the second dictionary--")
for i in range(m):
    s = input("Enter key: ")
    a = input("Enter value: ")
    d2[s]=a
print("The first dictionary is: ",d1)
print("The second dictionary is: ",d2)
for i in d2:
    d1[i]=d2[i]
print("The merged dictionary is: ",d1)