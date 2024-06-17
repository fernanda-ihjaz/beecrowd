import math as m

eixoX, eixoY = map(float, input().split())
eixoXb, eixoYb = map(float, input().split())

distancia = m.pow(m.pow(eixoXb-eixoX, 2) + m.pow(eixoYb-eixoY, 2), 1/2)

print("{0:.4f}".format(distancia))