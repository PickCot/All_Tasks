#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Введіть 2 інтових числа: \n";
    cin >> a >> b;

    a /= 1;
    b /= 1;
    float epsilon = 0.0000001f;

    if (fabs(a - b) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)"; //they are same
    }
    else {
        cout << "Results are not equal (by 0.000001 epsilon)"; //they are not same
    }
    
}