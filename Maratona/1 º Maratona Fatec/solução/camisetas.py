

T = int(input())

# alpha = input().split(' ')
# beta = input().split(' ')
# gama = input().split(' ')
a = 0
b = 0
g = 0

for i in range(0,3):
    Q = int(input())
    L = int(input())
    if i == 1:
        a = (T / Q) * L
    elif i == 2:
        b = (T / Q) * L
    elif i == 3:
        g = (T / Q) * L
        
if a > b and a > g:
    print(a)
elif b > a and b > g:
    print(b)
elif g > a and g > b:
    print(g)



# ar = a * int(alpha[1])
# br = b * int(beta[1])
# gr = g * int(gama[1])

