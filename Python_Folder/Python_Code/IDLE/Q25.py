file = open("text.txt")
f = file.read()
l = eval(f)
b1 = list(bin(l[0]))
b2 = list(bin(l[1]))
if len(b1) != len(b2):
    print("not ana")
else:
    c0 = b1.count(0)
    c1 = b1.count(1)
    t0 = b2.count(0)
    t1 = b2.count(1)
    if c0 == t0 and c1 == t1:
        print("ana")
    else:
        print("not ana")
