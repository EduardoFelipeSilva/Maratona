while True:
    inp = input()
    if inp == '0':
        break

    numAmigos, n, m = map(int, inp.split())
    matriz = [list(map(int, input().split())) for _ in range(n)]

    filaBoa = -1
    for x, linha in enumerate(matriz):
        seqMax = 0
        seq = 0
        for aaa in matriz[x]:
            if aaa == 0:
                seq += 1
            else:
                if seqMax < seq:
                    seqMax = seq
                seq = 0
        if seq > seqMax:
            seqMax = seq
        if seqMax >= numAmigos:
            filaBoa = n - x
    
    print(filaBoa)