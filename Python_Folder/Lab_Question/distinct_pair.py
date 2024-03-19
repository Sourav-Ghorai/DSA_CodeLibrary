n = int(input("Enter size of list: "))
print("Enter elements : ")
list=[]
for i in range(n):
    x = int (input())
    list.append(x)
list1=[]
list2=[]
k=0
for i in range(0,n-1):
    for j in range(i+1,n):
        if list[i]%2!=0 and list[j]%2!=0:
            list2.insert(0,list[i])
            list2.insert(1,list[j])
            if list2 not in list1:
                list1.insert(k,list2)
                k=k+1
                list2.clear()
print("The distinct pair are: ")
for i in range(0,len(list1),1):
    print(list1[i])