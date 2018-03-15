//Подсчитать среднее арифметическое трех введенных с клавиатуры чисел.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int number1, number2, number3; // Объявление переменных типа integer
    float average; // Объявление переменной типа float
    cout << "Введите первое число" << endl; // Подсказка
    cin >> number1; // Ввод числа
    cout << "Введите второе число" << endl;
    cin >> number2;
    cout << "Введите третье число" << endl;
    cin >> number3;
    
    average = (number1 + number2 + number3)/3; // Вычисление среднего арифметического
    cout << "Среднее арифметическое = ";
    cout << average <<endl; // Вывод среднего арифметического
    
    return 0;
}
