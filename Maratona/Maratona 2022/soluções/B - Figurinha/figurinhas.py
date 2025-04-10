results = []
while True:
    numFigs = int(input())
    if numFigs == 0:
        break
    numFigsC = int(input())

    figs = []
    for x in range(numFigsC):
        figs.append(int(input()))
    
    results.append(numFigs - len(list(dict.fromkeys(figs).keys())))
[print(result) for result in results]