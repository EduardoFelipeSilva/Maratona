nome = input()
salario_fixo = float(input())
vendas = float(input())

comissao = 0.15 * vendas
total = salario_fixo + comissao

print(f'TOTAL = R$ {total:.2f}')