valor = int(input())
print(valor)

qtd_notas = valor // 100
valor -= qtd_notas*100 
print(f"{qtd_notas} nota(s) de R$ 100,00")

qtd_notas = valor // 50
valor -= qtd_notas*50
print(f"{qtd_notas} nota(s) de R$ 50,00")

qtd_notas = valor // 20
valor -= qtd_notas*20
print(f"{qtd_notas} nota(s) de R$ 20,00")

qtd_notas = valor // 10
valor -= qtd_notas*10
print(f"{qtd_notas} nota(s) de R$ 10,00")

qtd_notas = valor // 5
valor -= qtd_notas*5
print(f"{qtd_notas} nota(s) de R$ 5,00")

qtd_notas = valor // 2
valor -= qtd_notas*2
print(f"{qtd_notas} nota(s) de R$ 2,00")

qtd_notas = valor
print(f"{qtd_notas} nota(s) de R$ 1,00")
