
print("\nParabens voce ganhou um aumento!")
print("\nQual é seu salário atual?")
salario1 = float(input())
print("\nQual é o percentual de aumento? (em decimal)")
aumento = float(input())



salario2 = (aumento * salario1) + salario1

print("\nO seu novo salário é de: {:.2f}".format(salario2))
