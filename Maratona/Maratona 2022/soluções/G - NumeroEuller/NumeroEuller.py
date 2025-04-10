import sys
if __name__ == '__main__':
    while True:
        linha = input()
        if linha in '0':
            break
        n = int(linha)
        print(f'{(1+(1/n)):,.24f}')
        s = (1+(1/n))**n
        print(f'{s:,.24f}')
sys.exit()
