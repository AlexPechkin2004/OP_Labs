#імпорт бібліотеки math
import math

print ("Варіант 24. Обчислення значення функції Shx із заданою точністю e\n")

#задання необхідних змінних
x=float(input("Введіть значення x: "))
e=float(input("Введіть значення e: "))
shx=0
counter=1
print("0")

#запуск циклу
while (x**counter)/(math.factorial(counter))>=e:         
         shx+=(x**counter)/(math.factorial(counter))
         print(shx)
         counter+=2
else:
          print("\nОстаннє число в цьому списку є шуканим значенням функції Shx із заданою точністю e")

