num = input().split(" ")
final = []
qualquer = []
z = []
v = []
banana = 0
quant = len(num)
soma = []

for i in range(0,quant):
    
    if len(num[i]) == 1:
        if num[i] == ".":
            v.append(1)
        elif num[i] == "-":
            v.append(5)
        elif num[i] == "*":
            v.append(0)
        final.append(v)
    else:
        
        num2 = num[i].strip()
        quant2 = len(num2)
        for a in range(0,quant2):
            if num2[a] == ".":
                qualquer.append(1)
                banana += 1
                z.append(banana)
            elif num2[a] == "-":
                qualquer.append(5)
                banana += 5
                z.append(banana)
            elif num[a] == "*":
                qualquer.append(0)
                banana += 0
            z.append(banana)
        banana = 0
        print(banana)
        soma = sum(z)
        final.append(soma)
        print(final)
        
#         a = sum(qualquer)*20**i
#     print(a)
#     final.append(a)
#     qualquer.clear()
# print(sum(final))


    # for e in qualquer:
    #     print(qualquer, e)
    #     c = e * 20 ** i
    #     i += 1
    #     final.append(c)
        
    #     print(c)
        
