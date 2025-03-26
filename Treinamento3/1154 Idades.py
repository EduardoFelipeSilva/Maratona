a = 1
resultado = 0
cont = 0
while a>=1:
    a = int(input())
    if a >= 1:
        cont += 1
        resultado += a
        media = resultado/cont
print(f'{media:.2f}')