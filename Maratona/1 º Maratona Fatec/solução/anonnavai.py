passeios = int(input())
for x in range (0,passeios):
    dorothyN = int(input())
    dagmarN = int(input())
    numeroTotal = dorothyN + dagmarN
    if dorothyN > dagmarN and numeroTotal > 40:
        print("DOROTHY DECIDE E A NONNA VAI")
    elif dagmarN > dorothyN and numeroTotal > 40:
        print("DAGMAR DECIDE E A NONNA VAI")
    elif dorothyN > dagmarN:
        print("DOROTHY DECIDE")
    elif dagmarN > dorothyN:
        print("DAGMAR DECIDE")
