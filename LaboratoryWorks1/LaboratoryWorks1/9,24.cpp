//По заданной длине, ширине и высоте параллелепипеда вычислить площадь его поверхности

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
#define PI 3.14
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int length, width, height; // Создаем переменную типа integer
    double surfaceArea;
    
    cout << "Введите длину" << endl; // Подсказка
    cin >> length; // Ввод переменной
    cout << "Введите ширину" << endl; // Подсказка
    cin >> width; // Ввод переменной
    cout << "Введите высоту" << endl; // Подсказка
    cin >> height; // Ввод переменной
    
    surfaceArea = 2 * ((length * width) + (length * height) + (width * height)); //Вычисление площади боковой поверхности
    cout << "Площадь боковой поверхности = " << surfaceArea << endl; // Подсказка
    
    return 0;
}


