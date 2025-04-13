dia = input().split()
diaInicio = float(dia[1])

horarioInicio = input().split(':')
horaInicio = float(horarioInicio[0])
minutoInicio = float(horarioInicio[1])
segundoInicio = float(horarioInicio[2])


diaTerminio = input().split()
diaTerminio = float(dia[1])
horarioTerminio = input().split(':')
horaTerminio = float(horarioTerminio[0])
minutoTerminio = float(horarioTerminio[1])
segundoTerminio = float(horarioTerminio[2])

horaInicio = horaInicio * (60 * 60)
minutoInicio = minutoInicio * 60

horaTerminio = horaTerminio * (60 * 60)
minutoTerminio = minutoTerminio * 60

dia = (diaTerminio - diaInicio) * (24 * 60 * 60)

totalInicio =  horaInicio + minutoInicio + segundoInicio
totalTerminio = horaTerminio + minutoTerminio + segundoTerminio
total = totalTerminio - totalInicio +dia
print(total)
print(f'{total // (24 * 60 * 60)} dia(s)')
print(f'{total // (60 * 60)} hora(s)')
print(f'{total  // 60 } minuto(s)')
print(f'{total} segundo(s)')


# Dia 5
# 08 : 12 : 23
# Dia 9
# 06 : 13 : 23

