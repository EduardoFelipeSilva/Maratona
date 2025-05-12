T = int(input())
M = int(input())
C = int(input())
V = int(input())

mt = (M * T ) * 2
ct = (C * T ) * 2
vt = (V * T ) * 2

fonteA = ct + (vt * 2)
fonteB = mt + vt
fonteC = (mt* 2) + ct


if fonteA < fonteB and fonteA < fonteC:
    print(fonteA)
elif fonteB <fonteC:
    print(fonteB)
else:
    print(fonteC)
# if mt < ct and mt < vt:
#     print(mt)
# elif ct < mt and ct < vt:
#     print(ct)
# elif vt < mt and vt < ct:
#     print(vt)

