#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void ArrayOutput(int* arr, int size); // виведення на екран масиву чисел
void sortArray(int* arr, int size); //сортування масиву методом бульбашки
string removeStartAndEndSpaces(string s); // видалення пробілів на початку та в кінці рядка
void FromStringToArray(string s, int* a, int size); // запис чисел з рядка в одновимірний масив
int sizeArray(string s); //знаходження кількості чисел в рядку

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть рядок з цифр і пробілів: ";
    string str;
    getline(cin, str); //введення рядка
    str = removeStartAndEndSpaces(str);
    int numbersCounter = sizeArray(str); //знаходження кількості чисел в рядку
    int* a = new int[numbersCounter]; //створення масиву чисел з рядка
    FromStringToArray(str, a, numbersCounter);
    sortArray(a, numbersCounter);
    cout << "Упорядковані числа: ";
    ArrayOutput(a, numbersCounter);
}

string removeStartAndEndSpaces(string s)
{  
    while (isspace(s[0])) {   //видалення пробілів спочатку рядка
        s.erase(0, 1);
    }
    
    int pos = s.size() - 1;
    while (isspace(s[pos])) {  // видалення пробілів в кінці рядка
        s.pop_back();
        pos--;
    }
    return s;
}

int sizeArray(string s)
{
    int counter = 0, size = 0;
    while (counter < s.size())
    {  //цикл від 0 до значення розміру рядка
        if (s[counter] != ' ')
        {
            size++;
            while (s[counter] != ' ' && counter < s.size()) {
                counter++;
            }
        }
        else {
            while (s[counter] == ' ' && counter < s.size()) {
                counter++;
            }
        }
    }
    return size;
}

void FromStringToArray(string s, int* a, int size)
{   
    string rez;  // рядок, в який ми тимчасово записуємо числа
    int pos; //позиція пробілу
    for (int i = 0; i < size; ++i) {
        pos = s.rfind(' ');  //пошук позиції пробілу
        if (pos == -1) 
        {  
            a[i] = atoi(s.c_str()); // запис в масив першого (або єдиного) числа рядка
        }
        else
        {
            rez = s.substr(pos + 1);  //виділення числа з рядка
            a[i] = atoi(rez.c_str());  // запис в масив набору цифер як числа
            for (int j = pos+1; j < s.size(); ++j) //цикл видалення щойно записаних цифр з рядка
            {  
                s.erase(j);
            }
            while (s[pos] == ' ') //цикл видалення пробілів з рядка перед щойно записаним в масив числом
            {  
                s.erase(pos);
                pos--;
            }
        }
    }
}

void sortArray(int* arr, int size)
{ 
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ArrayOutput(int* arr, int size)
{
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
}