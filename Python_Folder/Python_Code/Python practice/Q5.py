str = input("Enter the string: ")
s1 = ""
s2 = ""
for i in range(0,len(str)):
    if str[i].isupper():
        s1 +=str[i]
    else:
        s2 += str[i]
print(s2+s1)