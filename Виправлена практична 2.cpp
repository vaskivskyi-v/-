//ПРАКТИЧНА #2 Васьківський 13 Варіант
#include <iostream>// веденя виведеня
#include <iomanip>//setw setfill
#include <windows.h>//налаштування консолі
#include <cmath>//піднести до степеня
using namespace std;// щоб не писати std::

int main()
{
    SetConsoleOutputCP(CP_UTF8);//для виводу тексту
    SetConsoleCP(CP_UTF8);//для вводу тексту
    setlocale(LC_ALL, "");//синхронізація для української

    // ЗАВДАННЯ 1
    cout << "Прізвище: Васьківський" << endl;
    cout << "Ім'я: Володимир" << endl;
    cout << "Дата: 31.01.2009" << endl << endl;

    // ЗАВДАННЯ 2
    char x = ' ';
    char y = '1';
    char z = '3';

    cout << setfill(y) << setw(4) << "";
    cout << setfill(x) << setw(4) << "";
    cout << setfill(z) << setw(4) << "" << endl;

    cout << setfill(x) << setw(2) << "";
    cout << setfill(y) << setw(2) << "";
    cout << setfill(x) << setw(3) << "";
    cout << setfill(z) << setw(2) << "";
    cout << setfill(x) << setw(2) << "";
    cout << setfill(z) << setw(2) << "" << endl;

    cout << setfill(x) << setw(2) << "";
    cout << setfill(y) << setw(2) << "";
    cout << setfill(x) << setw(6) << "";
    cout << setfill(z) << setw(3) << "" << endl;

    cout << setfill(x) << setw(2) << "";
    cout << setfill(y) << setw(2) << "";
    cout << setfill(x) << setw(3) << "";
    cout << setfill(z) << setw(2) << "";
    cout << setfill(x) << setw(2) << "";
    cout << setfill(z) << setw(2) << "" << endl;

    cout << setfill(y) << setw(6) << "";
    cout << setfill(x) << setw(2) << "";
    cout << setfill(z) << setw(4) << "" << endl << endl;

    // ЗАВДАННЯ 3 13 варіант
    double a, b, c, d;
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть c: ";
    cin >> c;
    cout << "Введіть d: ";
    cin >> d;

    double result = ((c / a - d) / (a / 4 + d)) - ((5 * d - b) / (c - a * a)); // Формула 

    cout << "Результат: " << result << endl;

    return 0;
}


