n = int(input("How many elements you want to add in the tuple: "))
l = []
t = tuple(l)
if n==0:
    print("The tuple is: ",t)
for i in range (n):
    a = int (input("Enter element: "))
    l.append(a)
    t = tuple(l)
    print("The tuple is : ",t)