try:
    file = open("File Handling/f1.txt","r") 
    lines = file.readlines()
    for line in lines[::]:
        print(line[::-1])
except FileNotFoundError:
    print("File not found. Please enter a valid file name.")
