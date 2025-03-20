c1 = input().split()
c2 = input().split()

c1 = list(map(float, c1))
c2 = list(map(float, c2))


dis = ((c2[0] - c1[0])**2 + (c2[1] - c1[1])**2)**0.5

print(f"{dis:.4f}")
