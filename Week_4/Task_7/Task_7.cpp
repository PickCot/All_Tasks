#include <iostream>
using namespace std;

int main()
{
    double a1;
    double a2;
    double a3;
    double a4;
    double a5;
    
    cout << "Put these values into your code:\n";
    cin >> a1 >> a2 >> a3 >> a4 >> a5;


    cout << a1 << endl;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << a2 << endl;

    cout.precision(6);
    cout << a3 << endl;

    cout.precision(2);
    cout << a4 << endl;

    cout << (int)a5;
}
