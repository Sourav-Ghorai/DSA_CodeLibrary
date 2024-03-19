file = open("text.txt")
f = file.read()
l = f.split()
min = len(l[0])
list = []
for i in l:
    if len(i)>min:
        min = len(i)
for i in l:
    if(len(i)==min):
        list.append(i)
print(list)
