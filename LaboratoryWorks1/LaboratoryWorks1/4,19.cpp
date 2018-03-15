//По введенной с клавиатуры стороне куба вычислить площадь его боковой поверхности

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int side, surfaceArea; // Создаем переменную типа integer
    cout << "Введите размер стороны куба" << endl; // Подсказка
    cin >> side; // Ввод переменной
    surfaceArea = 6 * side * side; // Вычисление площади боковой повернхности
    cout << "Площадь боковой поверхности = " << surfaceArea << endl; // Подсказка
    
    return 0;
}


