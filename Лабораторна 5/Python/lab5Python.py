import math

print("Визначення перших 10 п'ятизначних паліндромів, що є простими числами:\n")

a=0 #початкове значення лічильника кількості п'ятизначних паліндромів, що є простими числами

for k in range(10000, 99999):
 if a<10:
  if (k//10000)==(k%10) and ((k//1000)%10)==((k%100)//10): #перевірка, чи є п'ятизначне число паліндромом

#Перевірка, чи є п'ятизначний паліндром простим числом:
    i = 2
    while k % i != 0:
        i += 1
    if i == k:
     print(k)
     a+=1
     
  k+=1
