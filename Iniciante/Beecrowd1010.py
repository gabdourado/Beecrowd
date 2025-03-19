linha1 = input().split(" ")
linha2 = input().split(" ")

total = int(linha1[1])*float(linha1[2]) +  int(linha2[1])*float(linha2[2])

print(f"VALOR A PAGAR: R$ {total:.2f}")
