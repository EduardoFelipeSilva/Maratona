n = int(input())
while n > 0:
    teste = int(input())
    a = 0
    for i in range(1, teste):
        if teste % i == 0:
            a += i
    if a ==  teste:
        print(f'{teste} eh perfeito')
    else:
        print(f'{teste} nao eh perfeito')

    n -= 1