import math as m

base, baseB, altura = map(float, input().split())

TRIANGULO = base*altura / 2
CIRCULO = m.pow(altura, 2)*3.14159
TRAPEZIO = (base+baseB)*altura / 2
QUADRADO = m.pow(baseB, 2)
RETANGULO = base*baseB

print("TRIANGULO: {0:.3f}".format(TRIANGULO))
print("CIRCULO: {0:.3f}".format(CIRCULO))
print("TRAPEZIO: {0:.3f}".format(TRAPEZIO))
print("QUADRADO: {0:.3f}".format(QUADRADO))
print("RETANGULO: {0:.3f}".format(RETANGULO))