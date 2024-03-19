file = open("text.txt")
f = file.read()
l = eval(f)
m = min(l)
while m!=1:
    for i in l:
        if i%m != 0:
            break
    else:
        print(m)
        break
    m-=1
else:
    print(m)
