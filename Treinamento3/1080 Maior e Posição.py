resAnterior = 0
a = 0
maior = 0
posicao = 0

for i in range (1,101):
    resAnterior = a
    a = int(input())
    if a > maior:
        maior = a
        posicao = i
print(maior)
print(posicao)
