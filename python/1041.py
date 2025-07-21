x, y = map(float, input().split())

if x==0 and y != 0:
    print("Eixo Y")
    exit
if y==0 and x != 0:
    print("Eixo X")
    exit
if x == 0 and y == 0:
    print("Origem")
    exit
if x > 0 and y > 0:
    print("Q1")
    exit
if x < 0 and y > 0:
    print("Q2")
    exit
if x < 0 and y < 0:
    print("Q3")
    exit
if x > 0 and y < 0:
    print("Q4")
    exit