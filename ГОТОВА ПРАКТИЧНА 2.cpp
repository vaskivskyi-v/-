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
    char a = ' ';
    char b = '1';
    char c = '3';

    cout << setfill(b) << setw(4) << "";
    cout << setfill(a) << setw(4) << "";
    cout << setfill(c) << setw(4) << "" << endl;

    cout << setfill(a) << setw(2) << "";
    cout << setfill(b) << setw(2) << "";
    cout << setfill(a) << setw(3) << "";
    cout << setfill(c) << setw(2) << "";
    cout << setfill(a) << setw(2) << "";
    cout << setfill(c) << setw(2) << "" << endl;

    cout << setfill(a) << setw(2) << "";
    cout << setfill(b) << setw(2) << "";
    cout << setfill(a) << setw(6) << "";
    cout << setfill(c) << setw(3) << "" << endl;

    cout << setfill(a) << setw(2) << "";
    cout << setfill(b) << setw(2) << "";
    cout << setfill(a) << setw(3) << "";
    cout << setfill(c) << setw(2) << "";
    cout << setfill(a) << setw(2) << "";
    cout << setfill(c) << setw(2) << "" << endl;

    cout << setfill(b) << setw(6) << "";
    cout << setfill(a) << setw(2) << "";
    cout << setfill(c) << setw(4) << "" << endl << endl;

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

    double result = c * a - d * pow(a, 4) + d - 5 * d - b * c - pow(a, 2); // Формула для ca - da^4 + d - 5d - bc - a^2

    cout << "Результат: " << result << endl;

    return 0;
}
