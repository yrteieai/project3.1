// Lab_03_1.cpp
// < Стефурак Анни >
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 14

#include <iostream>
#include <cmath> //  exp(), atan() та fabs()
using namespace std;

int main() {
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    // Введення x
    cout << "x = ";
    cin >> x;

    A = fabs(4 * x - 1);

    // Спосіб 1: Розгалуження в скороченій формі
    if (x < 0) 
        B = x * x * x * x * x * x * x - 2 * x; // x^7 - 2x
    
    if (x >= 0 && x < 3) 
        B = atan((exp(x) + 1) / 8);
    
    if (x >= 3) 
        B = (x * x * x * x) + exp(x * x + 3); // x^4 + e^(x^2 + 3)
    

    y = A + B; // Обчислення y
    cout << endl;
    cout << "1) y = " << y << endl;

    // Спосіб 2: Розгалуження в повній формі
    if (x < 0) 
        B = x * x * x * x * x * x * x - 2 * x; // x^7 - 2x
    
    else if (x >= 3) 
        B = (x * x * x * x) + exp(x * x + 3); // x^4 + e^(x^2 + 3)
    
    else 
        B = atan((exp(x) + 1) / 8);
    

    y = A + B;
    cout << "2) y = " << y << endl;

    return 0;
}
