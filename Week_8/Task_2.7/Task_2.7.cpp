#include <iostream>
using namespace std;

int main(void) {

	double pi4 = 0.0;
	long n;
	bool plus = true;
	cout << "Number of iterations? ";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		//pi4 = (plus == true ? double(pi4 + (1 / (i*2 - 1))) : double(pi4 - (1 / (i*2 - 1))));
		if (plus == true)
		{
			pi4 += (1.0 /(i * 2.0 - 1.0));
		}
		else {
			pi4 -= (1.0 /(i * 2.0 - 1.0));
		}
		plus = !plus;
		cout << pi4 << endl;
	}
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.0) << endl;
	return 0;
}