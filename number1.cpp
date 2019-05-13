#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "Which package did you choose?\n" << endl;
	cout << "Package A: P995/mo with 10 hours of access provided. Additional P20/hr.\n";
	cout << "Package B: P1495/mo with 20 hours of access provided. Additional P10/hr.\n";
	cout << "Package C: P1995/mo with unlimited access provided.\n";

	char pack;
	int time, bill;

	cout << "Chosen package: ";
	cin >> pack;
	cout << "Hours used: ";
	cin >> time;

	switch (pack)
	{
	case 'a':
	case 'A':
		if (time > 10)
		{
			cout << "Additional P20/hr was added" << endl;
			bill = (time - 10) * 20 + 995;
			cout << "Your Monthly bill is: P" << bill << endl;
		}
		else if (time <= 10 && time!=0)
		{
			bill = 995;
			cout << "Your Monthly bill is: P" << bill << endl;
		}
		else
			cout << "Invalid" << endl;
		break;

	case 'b':
	case 'B':
		if (time >20)
		{
			cout << "Additional P10/ hr was added" << endl;
			bill = (time - 20) * 10 + 1495;
			cout << "Your Monthly bill is: P" << bill <<  endl;
		}
		else if (time <= 20 && time!=0)
		{
			bill =  1495;
			cout << "Your Monthly bill is: P" << bill <<  endl;
		}
		else
			cout << "Invalid" << endl;
		break;

	case 'c':
	case 'C':
		if (time <= 744)
		{
			cout << "Your Monthly bill is: P" << "1995" <<  endl;
		}
		else
			cout << "Invalid" << endl;
		break;
	}
	_getch();
	return 0;
}

