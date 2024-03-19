n = int (input("Enter the length of the dictionary: "))
d = {}
for i in range(n):
    s = input("Enter the key: ")
    x = int (input("Enter the value: "))
    d[s] = x
print("The dictionary is: ",d)
sort_d = sorted(d.items(),key=lambda x:x[1])
print(sort_d)
