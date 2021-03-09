// Source.cpp
// Вкладені класи – складніші завдання
// Михайлов Олександр
// Варіант 19*

#include <iostream>
#include "Payment.h"

using namespace std;

int main()
{
	Payment::Date today;
	cout << " Enter todays date:" << endl;
	today.Read();
	cout << endl;

	Payment P1;

	P1.Read();
	P1.Display();

	cout << " Years of expirience: " << P1.CountExpirience(today) << endl;
	cout << " Amount of SumNarah: " << P1.AmountSumNarah() << " uah" << endl;
	cout << " Amount of SumUtrym: " << P1.AmountSumUtrym() << " uah" << endl;
	cout << " Amount of Zarplata: " << P1.AmountZarplata() << " uah" << endl;

	/*
	if (D1.IsEarlierThan(D2))
		cout << " TRUE" << endl << endl;
	else
		cout << " FALSE" << endl << endl;

	D1.SubstractDays();
	D1.Display();

	D1.DateAfterDays();
	D1.Display();

	cout << " Days between 2 dates: " << DaysBetweenAmount(D1, D2) << endl;
	*/

	return 0;
}