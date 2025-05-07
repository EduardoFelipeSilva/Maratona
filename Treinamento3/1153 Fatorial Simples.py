def fatorial(N):

    N = int(input())

    if N >= 0:
            resultado = 1
            for i in range(1,N+1):

                resultado *= i

            print(resultado)
    return resultado

def calcularFatorial(N):
    if N == 0 or N == 1:
        return 1
    else:
        return N * calcularFatorial(N-1)
    
print (calcularFatorial(6))
fatorial(1)