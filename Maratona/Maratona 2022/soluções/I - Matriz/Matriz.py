import sys

if __name__ == "__main__":
    y = 0
    while True:
        n = int(input())

        if n == 0:
            break

        M = []
        temp = []

        linha = input()
        temp = linha.split(' ')
        x = 0
        for i in range(n):
            linhas = []
            for j in range(n):
                linhas.append(int(temp[x]))
                x += 1
            M.append(linhas)

        if (y > 0):
            print(" ")
        y += 1

        for j in range(n):
            print(''.join(map(str, M[j])))

        print("transposta")

        M_t = list(map(list, zip(*M)))

        for j in range(n):
            print(''.join(map(str, M_t[j])))
sys.exit()
