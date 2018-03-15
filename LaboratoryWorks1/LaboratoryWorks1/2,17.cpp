//Подсчитать площадь круга по введенному с клавиатуры радиусу.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std
#define PI 3.14 // Объявление константы

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int radius; // Создаем переменную типа integer
    float area; // Создаем переменную типа float
    cout << "Введите радиус" << endl; // Подсказка
    cin >> radius; // Ввод переменной
    area = PI * radius * radius; // Вычисление площади
    cout << "Радиус = " << area << endl; // Вывод результата
    
    return 0;
}

