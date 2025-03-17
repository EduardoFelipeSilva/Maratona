N1, N2, N3, N4 = input().split()
N1 = float(N1)
N2 = float(N2)
N3 = float(N3)
N4 = float(N4)
MEDIA = (N1* 2 + N2* 3 + N3* 4 + N4 * 1)/10
if MEDIA >= 7:
    print(f'Media: {MEDIA:.1F}')
    print("Aluno aprovado.")
elif MEDIA < 5:
    print(f'Media: {MEDIA:.1F}')
    print("Aluno reprovado.")
else:
    print(f'Media: {MEDIA:.1F}')
    print("Aluno em exame.")
    notaExame = float(input())
    print(f'Nota do exame: {notaExame:.1f}')
    MEDIAFINAL = (MEDIA + notaExame)/2
    if MEDIAFINAL >=5:
        print("Aluno aprovado.")
        print(f'Media final: {MEDIAFINAL:.1f}')
    else:
        print("Aluno reprovado.")
        print(f'Media final: {MEDIAFINAL:.1f}')



