preço = [0, 4, 4.50, 5, 2, 1.50]

cod, quant = map(int, input().split())

cod = preço[int(cod)]
    
print("Total: R$ {0:.2f}".format(cod*quant))
