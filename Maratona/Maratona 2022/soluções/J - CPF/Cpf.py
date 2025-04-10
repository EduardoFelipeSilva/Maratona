#!/usr/bin/env python3
#encoding: windows-1252

# To change this license header, choose License Headers in Project Properties.
# To change this template file, choose Tools | Templates
# and open the template in the editor.

import sys

def ValidaCpf(strCpf):

    # Realiza a valida��o do CPF.
    # strCPF n�mero de CPF a ser validado
    #@return true se o CPF � v�lido e false se n�o � v�lido
    
    if len(strCpf.strip()) == 0:
        return False

    cpfseq = ["11111111111","22222222222","33333333333","44444444444", 
                    "55555555555", "66666666666", "77777777777", "88888888888", 
                    "99999999999"]
                    
    for i in range(9):
        if strCpf==cpfseq[i]:
            return False
        
    d1 = 0
    d2 = 0

    digito1 = 0
    digito2 = 0 
    resto = 0

    for nCount in range(0,9):
        
        digitoCPF = int(strCpf[nCount:nCount+1])

        # multiplique a ultima casa por 2 a seguinte por 3 a seguinte por 4 e assim por diante.

        d1 +=  (10 - nCount) * digitoCPF

        # para o segundo digito repita o procedimento incluindo o primeiro digito calculado no passo anterior.
            
        d2 += (11 - nCount) * digitoCPF

    #Primeiro resto da divis�o por 11.
    
    resto = (d1*10) % 11

    # Se o resultado for 0 ou 1 o digito � 0 caso contr�rio o digito � 11 menos o resultado anterior.
        
    if resto == 10:
        digito1 = 0
    else:
        digito1 = resto

    d2 += 2 * digito1

    # Segundo resto da divis�o por 11.
        
    resto = (d2*10) % 11
    
    # Se o resultado for 0 ou 1 o digito � 0 caso contr�rio o digito � 11 menos o resultado anterior.
        
    if resto == 10:
        digito2 = 0
    else:
        digito2 = resto

    # Digito verificador do CPF que est� sendo validado.
        
    nDigVerific = strCpf[len(strCpf) - 2:len(strCpf)]

    # Concatenando o primeiro resto com o segundo.
        
    nDigResult = str(digito1) + str(digito2)
    
    # comparar o digito verificador do cpf com o primeiro resto + o segundo resto.
        
    return nDigVerific == nDigResult

if __name__ == "__main__":
        
    while True:

        linha = input()
        
        if linha in '0':
            break
            
        if ValidaCpf(linha):
            print("Sim")
        else:
            print("Nao")
sys.exit()
