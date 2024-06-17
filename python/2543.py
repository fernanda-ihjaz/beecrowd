while 1:
    try:
        contador = 0
        num, cod = map(int, input().split())
        for i in range(num):
            codPlayer, game = map(int, input().split())
            if codPlayer ==  cod and game == 0:
                contador += 1 
        print(contador)
    except EOFError:
        break