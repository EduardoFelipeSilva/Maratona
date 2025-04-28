n = input().split()
n1 = int(n[0])
index = 1
while n1 > 0 and index < len(n):

    x = int(n[index])
    a = 0
    for i in range(1, x):
        if x % i == 0:
            a += i
    if a ==  x:
        print(f'{x} eh perfeito')
    else:
        print(f'{x} nao eh perfeito')

    n1 -= 1
    index += 1