n = int(input())
while n > 0:
    j1 = (input()).split()
    j2 = (input()).split()
    j3 = (input()).split()
    m1 = (input()).split()
    m2 = (input()).split()
    m3 = (input()).split()
    dj1 = int(j1[0])
    dj2 = int(j2[0])
    dj3 = int(j3[0])
    pj1 = int(j1[1])
    pj2 = int(j2[1])
    pj3 = int(j3[1])
    dm1 = int(m1[0])
    dm2 = int(m2[0])
    dm3 = int(m3[0])
    pm1 = int(m1[1])
    pm2 = int(m2[1])
    pm3 = int(m3[1])
    j1j = dj1 * pj1
    j2j = dj2 * pj2
    j3j = dj3 * pj3
    m1j = dm1 * pm1
    m2j = dm2 * pm2
    m3j = dm3 * pm3
    tj = j1j + j2j + j3j
    tm = m1j + m2j + m3j
    if tj > tm:
        print("JOAO")
    else:
        print("MARIA")

    n -= 1

