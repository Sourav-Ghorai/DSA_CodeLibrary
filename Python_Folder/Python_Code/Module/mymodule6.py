import random
def randintcomp(a,low,high): 
    res = [random.randrange(low, high) for i in range(a)] 
    return res