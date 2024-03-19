try:
    num = float(input("Enter a number: "))
    square = num**2
    print("Square: ", square)
except KeyboardInterrupt:
    print("Keyboard Interrupt exception caught.")
except ValueError:
    print("Please enter a valid number.")
