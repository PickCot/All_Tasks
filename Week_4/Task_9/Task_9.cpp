#include <iostream>
using namespace std;
int main()
{
    string IP[4];
    string res = "";
    int i = 0;
    while (i < 4) {
        cout << "Введіть число: ";
        if (IP[i] <= 255) /// !!!
        {
            cin >> IP[i];

            if (i < 3) {
                res += (IP[i] + ".");
            }
            else {
                res += IP[i];
            }
            i++;
        }
        else {
            break;
        }
        
    }
    
    cout << " " << res;
    return 0;
}