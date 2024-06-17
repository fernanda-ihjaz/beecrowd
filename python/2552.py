x, y = map(int, input().split())

matriz = ""

for i in range(0,x):
    for j in range(0,y):
        a = int(input())
        matriz += str(a) + " "
    matriz += "\n"

print(matriz)