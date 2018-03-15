//По заданной длине, ширине и высоте параллелепипеда вычислить его объем

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
#define PI 3.14
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int length, width, height; // Создаем переменную типа integer
    double volume;
    
    cout << "Введите длину" << endl; // Подсказка
    cin >> length; // Ввод переменной
    cout << "Введите ширину" << endl; // Подсказка
    cin >> width; // Ввод переменной
    cout << "Введите высоту" << endl; // Подсказка
    cin >> height; // Ввод переменной
    
    volume = length * width * height; //Вычисление объема
    cout << "Площадь боковой поверхности = " << volume << endl; // Подсказка
    
    return 0;
}


