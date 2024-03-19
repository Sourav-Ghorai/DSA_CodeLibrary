try:
   age = int(input("Enter age: "))
   if(age<0):
        raise ValueError("Invalid Input")
except ValueError as e:
    print(e)
else:
    print(age)
finally:
    print("Good Bye!")