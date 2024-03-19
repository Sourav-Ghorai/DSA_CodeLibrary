def prime(x):
    n = x//2
    for i in range(2,n+1):
        if x%i==0:
            return False
    else: return True