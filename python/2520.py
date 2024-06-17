while 1:
    try:
        segundos = 1
        lista = []
        M, N = map(int, input().split())
        for i in range(M):
            linha = map(int, input().split())
            lista.append(list(linha))
        
        for i in range(M):
            for j in range(N):
                if lista[i][j] == 2:
                    pokX, pokY = i, j
                elif lista[i][j] == 1:
                    playX, playY = i, j
                    
        if pokX <= playX and pokY <= playY:
            segundos = (playX - pokX) + (playY - pokY)
        if pokX >= playX and pokY >= playY:
            segundos = (pokX - playX) + (pokY - playY)
        if pokX <= playX and pokY >= playY:
            segundos = (playX - pokX) + (pokY - playY)
        if pokX >= playX and pokY <= playY:
            segundos = (pokX - playX) + (playY - pokY)
        print(segundos)
    except EOFError:
        break