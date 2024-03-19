file = open("file.txt")
l = eval(file.read())
d={}
for i in l:
    a = list(i)
    d[a[0]] = a[1]
print(l)
print(d)
