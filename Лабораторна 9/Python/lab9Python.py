String = input("Введіть рядок з цифр і пробілів: ")  
List = String.split() 
List = [int(element) for element in List]
List.sort() 
print("Упорядковані числа: ", end="")
for x in List: 
    print(x, end=" ")
print()
