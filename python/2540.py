while 1:
    try:
        entrada = int(input())
        votos = input().split()
        votosSim = 0
        votosNao = 0
        for i in votos:
            if i == '1':
                votosSim += 1
        terco = entrada*2/3
        if votosSim >= terco:
            print('impeachment')
        else:
            print('acusacao arquivada')
    except EOFError:
        break