coeficientes = input().split()
coeficientes = list(map(float, coeficientes))

a = coeficientes[0]
b = coeficientes[1]
c = coeficientes[2]

delta = b**2 - 4*a*c

if a == 0 or delta < 0: 
    print("Impossivel calcular")
else:
    R1 = (-b + (delta)**0.5)/(2*a)
    R2 = (-b - (delta)**0.5)/(2*a)
    print(f"R1 = {R1:.5f}\nR2 = {R2:.5f}")
