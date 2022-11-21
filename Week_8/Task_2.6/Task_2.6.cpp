#include <iostream>
using namespace std;
int main()
{
    int c0;
    int steps = 0;
    cout << "Введіть с0\n";
    cin >> c0;
    if (c0 > 0) {
        do {
            if (c0 % 2 == 0)
            {
                c0 /= 2;
            }
            else
            {
                c0 = 3 * c0 + 1;
            }
            cout << c0 << endl;
            steps++;
        } while (c0 != 1);
    }
    cout << "steps = " << steps;
}