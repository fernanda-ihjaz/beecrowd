from re import A


while 1:
    try:
        entrada = int(input())
        matrizM = []
        matrizL = []
        cartasM, cartasL = map(int, input().split())
        for i in range(cartasM):
            m = []
            valores = input().split()
            for k in range(len(valores)):
                m.append(int(valores[k]))
            matrizM.append(m)
        for i in range(cartasL):
            m = []
            valores = input().split()
            for k in range(len(valores)):
                m.append(int(valores[k]))
            matrizL.append(m)
        escolhaM, escolhaL = map(int, input().split())
        sorteado = int(input())
        if matrizM[escolhaM-1][sorteado-1] > matrizL[escolhaL-1][sorteado-1]:
            print('Marcos')
        elif matrizM[escolhaM-1][sorteado-1] < matrizL[escolhaL-1][sorteado-1]:
            print('Leonardo')
        else:
            print('Empate')
    except EOFError:
        break