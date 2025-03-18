n1 = int(input())
n2 = int(input())
n3 = int(input())
n4 = int(input())
n5 = int(input())
i = 0
p = 0
while i<1:
    if n1 % 2 == 0:
        p += 1
    if n2 % 2 == 0:
        p += 1
    if n3 % 2 == 0:
        p += 1
    if n4 % 2 == 0:
        p += 1
    if n5 % 2 == 0:
        p += 1
    i += 1

print(p,"valores pares")
