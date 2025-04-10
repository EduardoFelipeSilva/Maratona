#!/usr/bin/env python3
import sys
NOTAS_DISPONIVEIS = [100, 50, 20, 10]
if __name__ == "__main__":
    while True:
        linha = input()
        if linha in '0':
            break
        valor_a_sacar = int(linha)
        notas_sacadas = [0, 0, 0, 0]
        for key, nota in enumerate(NOTAS_DISPONIVEIS):
            valor = valor_a_sacar // nota
            notas_sacadas[key] = valor
            valor_a_sacar -= valor * nota
        print(notas_sacadas)
sys.exit()
