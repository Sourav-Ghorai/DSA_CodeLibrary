n = int (input("Enter the no. of players: "))
d = {}
for i in range(n):
    s = input("Enter the name of the player: ")
    x = int(input("Enter the score of the player: "))
    d[s] = x
while(1):
    s = input("Enter the player name to access the score: ")
    if s in d:
        print(d[s])
    else: 
        print(1)
        break