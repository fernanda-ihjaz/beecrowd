entrada = int(input())

horas = entrada//3600

min = entrada%3600 //60

seg = (entrada%3600)%60

print("{}:{}:{}".format(horas,min,seg))