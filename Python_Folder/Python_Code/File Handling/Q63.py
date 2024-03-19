try:
    filename = input("Enter the file name: ")
    file = open(filename, "r")
    data = file.read()
    words = data.split()
    word_count = len(words)
    print("Number of words in the file: ", word_count)
except FileNotFoundError:
    print("File not found. Please enter a valid file name.")
