//По заданному радиусу подсчитать объем шара.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
#define PI 3.14
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int radius; // Создаем переменную типа integer
    double volume; // Создаем переменную типа doublea
    
    cout << "Введите радиус" << endl; // Подсказка
    cin >> radius; // Ввод переменной
    volume = 1.33 * PI * radius * radius * radius ; // Вычисление объема
    cout << "Объем шара = " << volume << endl; // Подсказка
    
    return 0;
}


