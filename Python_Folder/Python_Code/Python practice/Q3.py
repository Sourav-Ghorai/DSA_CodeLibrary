# n = float(input("Enter the no. "))
# x = int(n)
# n = x
# s = 0
# r = 0
# while x!=0:
#     r = x%10
#     s = s*10 + r
#     x = x//10
# if s == n:
#     print("True")
# else:
#     print("False")

# Another approach
 

n = float(input("Enter the no. "))
m = str(int(n))
x = m[::-1]
if x==m:
    print("True")
else:
    print("False")