#Calculadora
n1 = int(input("Digite o primeiro numero "))
n2 = int(input("Digite o segundo numero "))
calculo = int(input("Digite a operação que deseja fazer, 1 para Soma, 2 para subtração, 3 para divisão"
                    "e 4 para multiplicação "))

if (calculo == 1):
    resultado = n1 + n2
    print("O resultado da soma dos numeros que voce digitou é: ", resultado)
elif (calculo == 2):
    resultado = n1 - n2
    print("O resultado da soma dos numeros que voce digitou é: ", resultado)
elif (calculo == 3):
    resultado = n1 / n2
    print("O resultado da soma dos numeros que voce digitou é: ", resultado)
elif (calculo == 4):
    resultado = n1 * n2
    print("O resultado da soma dos numeros que voce digitou é: ", resultado)
