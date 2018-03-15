//По заданному радиусу вычислить длину окружности

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
#define PI 3.14
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int radius; // Создаем переменную типа integer
    double circumference; // Создаем переменную типа doublea
    
    cout << "Введите радиус" << endl; // Подсказка
    cin >> radius; // Ввод переменной
    circumference = 2 * PI * radius ; // Вычисление объема
    cout << "Длина окружности = " << circumference << endl; // Подсказка
    
    return 0;
}


