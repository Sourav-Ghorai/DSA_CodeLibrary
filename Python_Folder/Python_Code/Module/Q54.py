import mymodule4
a=int(input("Enter the no.of random elements to be considered: ")) 
if(a>10): 
    a=int(input("Enter the no.of random elements to be considered: ")) 
lst = mymodule4.random.sample(range(10), a) 
print("The mean is: ", mymodule4.mean(lst)) 
print("The median is: ", 
mymodule4.median(lst)) 
print("The standard deviation is: ", 
mymodule4.standev(lst))