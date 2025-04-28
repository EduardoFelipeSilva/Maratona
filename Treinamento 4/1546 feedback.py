dia = int(input())

while dia > 0:
    quantidade_Feedback = int(input())

    while quantidade_Feedback > 0:
        categoria_feedback = int(input())

        if categoria_feedback == 1:
            print("Rolien")

        elif categoria_feedback == 2:
            print("Naej")

        elif categoria_feedback == 3:
            print("Elehcim")

        else:
            print("Odranoel")

            quantidade_Feedback -= 1

    dia -= 1