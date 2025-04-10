while True:
    inp = input()
    if inp == '0':
        break

    n, m = map(int, inp.split())
    matriz = [list(map(int, input().split())) for _ in range(n)]


    print(max(max([sum(linha) for linha in matriz]), max([sum([linha[coluna] for linha in matriz]) for coluna in range(m)])))
