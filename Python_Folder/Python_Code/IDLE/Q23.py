file = open("text.txt")
f = file.read()
f = f.lower()
v = "aeiou"
for i in v:
    if i not in f:
        print("not ac")
        break
else:
    print("ac")

