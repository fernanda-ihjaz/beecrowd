from collections import deque

def calculaM(reg, num, tentativas):
    while True:
        if len(reg) == regioes:
            reg.popleft()
        reg.rotate(-(num-1))
        if reg[0] == 13 and len(reg) != 1:
            tentativas += 1
            return False
        reg.popleft()
        
        if len(reg) == 1:
            num += 1
            tentativas += 1
            if reg[0] == 13:
                return True
            else:
                return False

while True:
    regioes = int(input())
    tentativas = 0
    num = 0
    if regioes == 0:
        break
    while True:
        reg_deq = deque()
        for i in range(1,regioes+1):
            reg_deq.append(i)
        
        tentativas += 1
        num += 1
        if calculaM(reg_deq, num, tentativas):
            print(tentativas)
            break