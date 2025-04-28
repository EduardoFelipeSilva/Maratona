while True:
    try:
        n_Alunos = int(input())
        ERP = 0
        EHD = 0
        INTRUSOS = 0

        while n_Alunos != 0:
            matricula = input().split()
            n_matricula = int(matricula[0])
            sigla = matricula[1]

            if sigla == 'EPR':
                ERP += 1
            elif sigla == 'EHD':
                EHD +=1
            else:
                INTRUSOS += 1
            n_Alunos -= 1

        print('EPR:', ERP)
        print('EHD:', EHD)
        print('INTRUSOS:', INTRUSOS)
    except EOFError:
        break
