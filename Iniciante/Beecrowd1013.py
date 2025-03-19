line = input()
line = list(map(int, line.split()))

maior = line[0]

if line[1] > maior:
    maior = line[1]
    
if line[2] > maior:
    maior = line[2]
    
print(f"{maior} eh o maior")
