while True:
    try:
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        add = num1 + num2
        mul = num1 * num2
        sub = num1 - num2
        div = num1 / num2
        print("Addition: ", add)
        print("Multiplication: ", mul)
        print("Subtraction: ", sub)
        print("Division: ", div)
        break
    except ValueError:
        print("Please enter a valid number.")
    except ZeroDivisionError:
        print("Cannot divide by zero. Please enter a non-zero number.")
