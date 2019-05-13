#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float bill, prev, rece, unp;
	cout << "Gallons used recently: ";
	cin >> rece;
	cout << "Gallons used in the previous month: ";
	cin >> prev;
	cout << "Unpaid Balance: ";
	cin >> unp;

	if (unp > 0)
	{
		cout << "Additional P20 for late charge" << endl;
		bill = 35.00 + (prev * 1.10) + (rece * 1.10) + (unp)+(20.00);
	}

	else

	{
		bill = 35.00 + (prev * 1.10) + (rece * 1.10);
	}

	cout << "Additional P35 due to water demand \n" << "Your total bill is: P" << fixed << setprecision(2) << bill;

	_getch();
	return 0;

}
