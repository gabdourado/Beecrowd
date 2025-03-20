idade = int(input())

anos = idade //365
idade -= anos*365

meses = idade //30
idade -= meses*30

dias = idade

print(f"{anos} ano(s)\n{meses} mes(es)\n{dias} dia(s)")
