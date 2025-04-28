def primo(x):
    qtd_divisores = 0
    pd = 1
    while pd <= x:
        if x % pd == 0:
            qtd_divisores += 1
        pd += 1
    if qtd_divisores == 2:
        return True
    else:
        return False


n = int(input())

while n > 0:
    x = int(input())
    if primo(x):
        print(f'{x} eh primo')
    else:
        print(f'{x} nao eh primo')
    n -= 1