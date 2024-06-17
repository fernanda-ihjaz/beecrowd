while 1:
    try:
        original = int(input())
        cont = 0
        while original > 1:
            original //= 2
            cont += 1
        print(cont)
    except EOFError:
        break