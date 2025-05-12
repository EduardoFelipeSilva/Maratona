num = input().split(" ")
resultado = 0
calc = 0
quant = len(num)
x = quant - 1

for i in range(0,quant):
    num2 = num[i].strip()
    quant2 = len(num2)
    for a in range(0,quant2):
        if num2[a] == ".":
            calc += 1
        elif num2[a] == "-":
            calc += 5
        elif num[a] == "*":
            calc += 0
    calc = calc * 20 ** x
    resultado += calc
    calc = 0
    x -= 1
print(resultado)
