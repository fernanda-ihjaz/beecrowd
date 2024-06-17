A, B, C, D = map(int, input().split())

for i in range(1):
    if B>C and D>A and C+D>A+B and C>0 and D>0 and A%2==0:
        True
    else:
        print("Valores nao aceitos")
        break
    print("Valores aceitos")