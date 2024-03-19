import mymodule5
a=int(input("Enter the no.of random elements to be considered: ")) 
x=int(input("Enter the lower limit: ")) 
y=int(input("Enter the upper limit: ")) 
lst = mymodule5.random.sample(range(x,y), a) 
print("The list is: ", lst) 
print("The random list is: ", mymodule5.shuffle(lst)) 