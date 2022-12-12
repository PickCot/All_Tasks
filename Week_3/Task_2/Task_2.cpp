#include <iostream>
using namespace std;

int main()
{
    char n;
input:
    cout << "Введіть першу літеру країни: ";
    cin >> n;

    switch (n) {
    case 'u': cout << "Населлення: 44 мільйона\n Кількість міст: > 400 "; break;
    case 'p': cout << "Населлення: 38 мільйона\n Кількість міст: > 900 "; break;
    case 'g': cout << "Населлення: 83 мільйона\n Кількість міст: > 2000 "; break;

    default: cout << "Error\n"; goto input;
    }
}