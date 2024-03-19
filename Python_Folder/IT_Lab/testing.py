lst=[]
with open("text.txt","r") as file:
    list = file.readlines()
    print(list)
    file.seek(0)
    list1 = file.read().splitlines()
    print(list1)
    for i in list1:
        lst.append(eval(i))
    print(lst)