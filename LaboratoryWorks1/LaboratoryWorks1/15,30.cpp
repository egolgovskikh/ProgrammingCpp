//Подсчитать площадь трапеции по введенным с клавиатуры основаниям и высоте

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int base1, base2, height; // Создаем переменную типа integer
    double area; // Создаем переменную типа doublea
    
    cout << "Введите верхнее основание" << endl; // Подсказка
    cin >> base1; // Ввод переменной
    cout << "Введите нижнее основание" << endl; // Подсказка
    cin >> base2; // Ввод переменной
    cout << "Введите высоту" << endl; // Подсказка
    cin >> height; // Ввод переменной
    
    area =  (base1+base2)/2 * height; // Вычисление объема
    cout << "Объем куба = " << area << endl; // Подсказка
    
    return 0;
}
