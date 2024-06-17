while 1:
    try:
        treinos = int(input())
        recorde = 0
        for dias in range(treinos):
            T, D = map(int, input().split())
            recordeAtual = D/T
            if recordeAtual > recorde:
                recorde = recordeAtual
                print(dias+1)
    except EOFError:
        break