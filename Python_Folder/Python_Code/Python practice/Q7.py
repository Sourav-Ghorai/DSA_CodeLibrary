str = input("Enter the string: ")
se = list(set(str))
dict = {}
for i in range(0,len(se)):
    c = str.count(se[i])
    dict[se[i]] = c
print(dict)
