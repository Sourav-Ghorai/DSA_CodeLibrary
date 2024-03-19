try:
    original = open("File Handling/f1.txt","r")
    reversed = open("File Handling/f2.txt","w")
    original_data = original.read()
    reversed_data = original_data[::-1]
    reversed.write(reversed_data)
    print("Data reversed and stored in", reversed)
except FileNotFoundError:
    print("File not found. Please enter a valid file name.")
