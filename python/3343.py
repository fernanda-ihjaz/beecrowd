#eu sou muito orgulhoso de ti, amor sdjshjdsjhsd
#vc é perfeita, eu te amo.

nTitas, hMuralha = map(int, input().split())

hTitas = str(input())

P, M, G = map(int, input().split())

fMuralha = hMuralha
qMuralhas = 1

aux = 0

for i in range(nTitas):
    verifica = False
    valorAtualTita = 0
    if hTitas[i] == "P":
        valorAtualTita = P
    elif hTitas[i] == "M":
        valorAtualTita = M
    elif hTitas[i] == "G":
        valorAtualTita = G
    if valorAtualTita <= aux:
        aux -= valorAtualTita
        continue
    if valorAtualTita <= hMuralha:
        hMuralha -= valorAtualTita
    else:
        if hMuralha > aux:
            aux = hMuralha
        qMuralhas += 1
        hMuralha = fMuralha-valorAtualTita

print(qMuralhas)

