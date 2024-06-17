valor = int(input())
valorFixo = valor
resto = 0

if valor >=100:
    A = valor//100
    valor = valor%100
    if valor == 0:
        valor=0
else:
    A = 0

if valor >= 50:
    B = valor//50
    valor = valor%50
    if valor == 0:
        valor=0
else:
    B = 0
    
if valor >= 20:
    C = valor//20
    valor = valor%20
    if valor == 0:
        valor=0
else:
    C = 0

if valor >= 10:
    D = valor//10
    valor = valor%10
    if valor == 0:
        valor=0
else:
    D = 0
    
if  valor>= 5:
    E = valor//5
    valor = valor%5
    if valor == 0:
        valor=0
else:
    E = 0

if valor >= 2:
    F = valor//2
    valor = valor%2
    if valor == 0:
        valor=0
else:
    F = 0
    
if valor >= 1:
    G = valor//1
    valor = valor%1
    if valor == 0:
        valor=0
else:
    G = 0

    
print(valorFixo)
print(A, "nota(s) de R$ 100,00")
print(B, "nota(s) de R$ 50,00")
print(C, "nota(s) de R$ 20,00")
print(D, "nota(s) de R$ 10,00")
print(E, "nota(s) de R$ 5,00")
print(F, "nota(s) de R$ 2,00")
print(G, "nota(s) de R$ 1,00")