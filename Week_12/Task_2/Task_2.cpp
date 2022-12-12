#include <iostream>
using namespace std;
int main()
{
	int time_past;
	struct
	{
		int hours;
		int minutes;
	} FirstDate, SecondDate, Difference;
	cout << "Введіть значення годин та хвилин і час (в хвилинах).\n";
	cin >> FirstDate.hours >> FirstDate.minutes >> SecondDate.hours >> SecondDate.minutes ;

	if ((FirstDate.hours > 24 && FirstDate.minutes > 60) || (SecondDate.hours > 24 && FirstDate.minutes > 60)) {
		cout << "Incorrect data";
	}
	else {
		if (SecondDate.hours < FirstDate.hours) 
		{
			Difference.hours = 24 - FirstDate.hours + SecondDate.hours;
		}
		else {
			Difference.hours = SecondDate.hours - FirstDate.hours;
		}
		
		if (SecondDate.minutes < FirstDate.minutes) {
			Difference.hours--;
			Difference.minutes = 60 + SecondDate.minutes - FirstDate.minutes;
		}
		else
		{
			Difference.minutes = SecondDate.minutes - FirstDate.minutes;
		}

		cout << "Difference: " << Difference.hours << ":" << Difference.minutes;
	}
}