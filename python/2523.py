while 1:
    try:
        letras = str(input())
        qnt = int(input())
        posicoes = input().split()
        frase = ''
        for i in range(qnt):
            frase += letras[int(posicoes[i])-1]
        print(frase)
        
    except EOFError:
        break