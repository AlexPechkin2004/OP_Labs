import math

def inputValues():
    n = int(input("Введіть значення цілого числа n: "))
    x = float(input("Введіть значення дійсного числа x: "))
    e = float(input("Введіть значення точності e: "))
    return n, x, e

def factorial(n):
 fact=1;
 for i in range (1, n+1):
  fact = fact * i
 return fact
 
def sum(n, x, e):
      k=0
      sum=0

      while (math.fabs((((-1)**k)/((factorial(k))*(factorial(n+k))))*((x/2)**(2*k+n)))>=e):
          sum=sum+((((-1)**k)/((factorial(k))*(factorial(n+k))))*((x/2)**(2*k+n)))
          k+=1
      return sum


print("Обчислити з точністю e значення виразу:\n")
n, x, e = inputValues ()
print("\nВідповідь: " + str(sum(n, x, e)))