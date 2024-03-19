try:
    num = int(input("Enter a number: "))
    if num < 0:
        raise ValueError("The number should be positive or zero")
    else:
        print(num)
except ValueError as e:
    print(e)
