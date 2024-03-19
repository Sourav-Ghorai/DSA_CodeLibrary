f = open("text.txt","r")
l = list(f.read())
test = ['[',']',',']
list = [int(i) for i in l if i not in test]
print(l)
print (list)