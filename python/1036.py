import math as m

A, B, C = map(float, input().split())

D = m.pow(B, 2) - (4*A*C)

for i in range(1):
    if 2*A==0 or D<0:
        print("Impossivel calcular")
    else:
        Xx = (-B + m.sqrt(D)) / (2*A)
        Xy = (-B - m.sqrt(D)) / (2*A)
        print("R1 = {0:.5f}".format(Xx/100))
        print("R2 = {0:.5f}".format(Xy/100))