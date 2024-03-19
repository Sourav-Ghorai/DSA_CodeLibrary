file = open("text.txt","r")
f = file.readlines()
list = eval(f[0])
dict = eval(f[1])
print(list)
print(dict)
value = dict.values()
l = []
for i in list:
    if i in value and i not in l:
        l.append(i)
print(l)
