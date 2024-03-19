s = input("Enter the string: ")
d = {}
for i in range(len(s)):
    if s[i] not  in d and s[i]!=" ":
        d[s[i]] = s.count(s[i])
print(d)