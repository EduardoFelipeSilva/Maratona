#!/usr/bin/env python3

# To change this license header, choose License Headers in Project Properties.
# To change this template file, choose Tools | Templates
# and open the template in the editor.

import sys

if __name__ == "__main__":

    while True:
        linha = input()

        if linha in '0':
            break

        a1 = int(linha)
        linha = input()
        a2 = int(linha)
        linha = input()
        a3 = int(linha)

        if a1 > a2 and a1 > a3:
            minutos = a2 * 2 + a3 * 4
        elif a2 > a1 and a2 > a3:
            minutos = a1 * 2 + a3 * 2
        else:
            minutos = a1 * 4 + a2 * 2

        print(minutos)

    sys.exit()
