soma = 0
for i in range(2):
    peca, quantidade, valor = map(float, input().split())
    soma = soma + quantidade*valor

print("VALOR A PAGAR: R$ {0:.2f}".format(soma))