str = input("Enter string: ")
s = "!@#$%^&*(){}[]|\/?+-= "
char = 0
digits = 0
sym = 0
for i in range(0,len(str)):
    if(str[i].isdigit()):
        digits+=1
    elif str[i].isalpha():
        char+=1
    elif str[i] in s:
        sym+=1
print("Characters: ",char)
print("Digits: ",digits)
print("symbol: ",sym)
