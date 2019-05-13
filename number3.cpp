#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Input two integers to solve for V" << endl;
	int A;
	int x;
	int y;
	const double z = 2.50;
	float V;

	cout << "X = "; cin >> x;

	cout << "Y = "; cin >> y;

	switch (x)
	{
		case 1:
		{
			x = 1;
			if (y < 5 && y >= 1)
				V = x * y * z;

			else if (y >= 5)
				V = x * (y / z);

			else
				V = x + y + z;

			break;
		}
		case 2:
		{
			x = 2;
			if (y <= 5)
			V = abs((x-y) / z);

			else
			V = x - (sqrt(y + z));

			break; 
		}
		default:
			V = x + y + z;
			break;
	}
		
	cout << "Value of V is: " << fixed << setprecision(2) << setw(10) << V << endl;
	_getch();
	return 0;
}
