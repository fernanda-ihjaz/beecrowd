while 1:
    try:
        entrada = int(input())
        somadorDeNC = 0
        somadordeC = 0
        for i in range(entrada):
            nota, carga = map(int, input().split())
            somadorDeNC += nota*carga
            somadordeC += carga
        print('{0:.4f}'.format(somadorDeNC/(somadordeC*100)))
    except EOFError:
        break