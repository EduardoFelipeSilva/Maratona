n = int(input())
final = 0
tt = 0

for i in range(0,n,1):
    t = int(input())
    tt += t 
    while tt < 0:
        final += 1
        tt += 1
print(final)