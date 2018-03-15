//Подсчитать объем цилиндра по введенным с клавиатуры радиусу и высоте.

#include <stdio.h> // Подключение нужных библеотек
#include <iostream>
#define PI 3.14
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int radius, height; // Создаем переменную типа integer
    float capacity; // Создаем переменную типа float
    
    cout << "Введите радиус" << endl; // Подсказка
    cin >> radius; // Ввод переменной
    cout << "Введите высоту" << endl; // Подсказка
    cin >> height; // Ввод переменной
    
    capacity = PI * radius * radius * height; // Вычисление площади
    cout << "Объем = " << capacity << endl; // Вывод результата
    
    return 0;
}

