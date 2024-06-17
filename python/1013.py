a, b, c = map(int, input().split())

MaiorAB = (a+b+abs(a-b)) /2
MaiorT = (MaiorAB+c+abs(MaiorAB-c)) /2

print(int(MaiorT), "eh o maior")