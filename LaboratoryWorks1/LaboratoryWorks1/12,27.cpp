//По заданному радиусу вычислить площадь поверхности шара.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
#define PI 3.14
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int radius; // Создаем переменную типа integer
    double surfaceArea; // Создаем переменную типа doublea
    
    cout << "Введите радиус" << endl; // Подсказка
    cin >> radius; // Ввод переменной
    surfaceArea = 4 * PI * radius * radius ; // Вычисление объема
    cout << "Площадь поверхности шара = " << surfaceArea << endl; // Подсказка
    
    return 0;
}


