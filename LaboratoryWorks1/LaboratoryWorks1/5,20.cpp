//Подсчитать объем конуса по введенным с клавиатуры радиусу и высоте.

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
#define PI 3.14
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int radius, height; // Создаем переменную типа integer
    double volume;
    
    cout << "Введите радиус" << endl; // Подсказка
    cin >> radius; // Ввод переменной
    cout << "Введите высоту" << endl; // Подсказка
    cin >> height; // Ввод переменной
    volume = PI * radius * radius * height * 0.33; // Вычисление объема
    cout << "Объем конуса = " << volume << endl; // Подсказка
    
    return 0;
}


