import sys
if __name__ == "__main__":
    lista = []
    while True:

        linha = input()
    
        if linha in '0':
            break
        temp = linha.split(' ')
    
        c = int(temp[0])
        d = int(temp[1])
        t = int(temp[2])
    

        combus = (d / c) - t

        if combus < 0:
            combus = 0
            
        lista.append(combus)

    for i in range(0, len(lista)):
        print("{:.1f}".format(lista[i]))
        
    sys.exit(0)