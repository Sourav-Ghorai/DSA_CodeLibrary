import random
def mean(ls): 
    return sum(ls)/len(ls) 
def median(ls): 
    ls.sort() 
    n=len(ls) 
    if n%2==0: 
        return (ls[n//2]+ls[n//2-1])/2 
    else: 
        return ls[n//2] 
def standev(ls): 
    mea=mean(ls) 
    var=sum((x-mea)**2 for x in ls) 
    return var**0.5