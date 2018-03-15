//По заданным сторонам прямоугольника вычислить его площадь

#include <stdio.h> // Подключение нужных библиотек
#include <iostream>
#include <math.h>
using namespace std; // Нужно, чтобы не вводить каждый раз std

int main()
{
    setlocale(LC_ALL, "Russian"); // Добавляем русский язык
    
    int a, b, c; // Создаем переменную типа integer
    double area, perimeter; // Создаем вещественные переменные
    
    cout << "Введите первую сторону" << endl; // Подсказка
    cin >> a; // Ввод первой стороны
    cout << "Введите вторую сторону" << endl; // Подсказка
    cin >> b; // Ввод второй стороны
    cout << "Введите третью сторону" << endl; // Подсказка
    cin >> c; // Ввод третьей стороны
    
    perimeter = (a+b+c)/2;
    area = sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c)); // Вычисление площади
    if (area != 0) // Условие существования треугольника
        cout << "Площадь треугольнка = " << area << endl; // Ответ
    else cout << "Такого треугольника не существует" << endl; // Ответ
    
    return 0;
}
