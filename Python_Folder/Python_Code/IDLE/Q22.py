file = open("text.txt")
lines = file.readlines()
list1 = eval(lines[0])
list2 = eval(lines[1])
l0 = []
l1 = []
l2 = []
for i in range(len(list2)):
    if list2[i] == 0:
        l0.append(list1[i])
    if list2[i] ==1 :
        l1.append(list1[i])

    if list2[i] == 2:
        l2.append(list1[i])
for i in range(len(l1)):
    l0.append(l1[i])
for i in range(len(l2)):
    l0.append(l2[i])
print(l0)
