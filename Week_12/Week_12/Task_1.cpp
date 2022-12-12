#include <iostream>
using namespace std;
int main()
{
	int time_past;
	struct
	{
		int hours;
		int minutes;
	} Date;
    cout << "Введіть значення годин та хвилин і час (в хвилинах).\n";
	cin >> Date.hours >> Date.minutes >> time_past;

	if (Date.hours > 24 && Date.minutes > 60) {
		cout << "Incorrect data";
	}
	else {
		Date.minutes = Date.minutes + time_past;

		while (Date.minutes > 60) {
			Date.minutes -= 60;
			Date.hours += 1;
		}
		while (Date.hours > 24) {
			Date.hours -= 24;
		}
		cout << "Expected time: " << Date.hours << ":" << Date.minutes;
	}
}