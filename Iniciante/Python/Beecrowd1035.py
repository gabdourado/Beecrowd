valores = input().split()
valores = list(map(int, valores))

A = valores[0]
B = valores[1]
C = valores[2]
D = valores[3]

if (B > C and D > A):
  if (C + D > A + B):
    if (C > 0 and D > 0):
      if (A % 2 == 0):
        print("Valores aceitos")
      else:
        print("Valores nao aceitos")
    else:
      print("Valores nao aceitos")
  else:
    print("Valores nao aceitos")
else:
    print("Valores nao aceitos")
