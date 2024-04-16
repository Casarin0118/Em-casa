numero1 = 0
numero2 = 0

print("\n Fale um numero")
numero1 = float(input())
print("\n Fale outro numero")
numero2 = float(input())

if(numero1>numero2):
   print("\n Se nada mudou, o primeiro numero", "(",numero1,")", "é maior")
else: 
   print("\n Se nada mudou, o segundo numero", "(", numero2, ")", "é maior")