file = open("text.txt")
s = file.read()
list = []
l = []
for i in range(len(s)):
    for j in range(i,len(s)):
        list.append(s[i:j+1])
print(list)
