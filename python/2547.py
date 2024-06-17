while True:
    try:
        contador = 0
        num, min, max = map(int, input().split())
        while num > 0:
            altura = int(input())
            if altura >= min and altura <= max:
                contador += 1
            num -= 1
        print(contador)
    except EOFError:
        break