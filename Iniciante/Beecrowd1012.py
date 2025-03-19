line = input()
line = line.split(" ")
A = float(line[0])
B = float(line[1])
C = float(line[2])
pi = 3.14159

tri = A*C/2
cir = pi*C**2
trap = (A+B)*C/2
qua = B**2
ret = A*B
print(f"TRIANGULO: {tri:.3f}")
print(f"CIRCULO: {cir:.3f}")
print(f"TRAPEZIO: {trap:.3f}")
print(f"QUADRADO: {qua:.3f}")
print(f"RETANGULO: {ret:.3f}")
