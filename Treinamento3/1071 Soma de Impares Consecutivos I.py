x = int(input())
y = int(input())

resultado = 0

if y < x:
    for i in range(y + 1, x):
        if i % 2 != 0:
            resultado += i

print(resultado)