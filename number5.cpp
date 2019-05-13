#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "Fibonacci number: " << endl;
	int x = 0, y = 1, z, Fibonacci;
	cout << x << "," << y << ","; 
	for (Fibonacci = 0; Fibonacci <= 20; Fibonacci++)
	{
		if (Fibonacci <= 18)
		{
			z = x + y;
			x = y;
			y = z;
			cout << z << ",";
		}
		else if (Fibonacci == 19)
		{
			z = x + y;
			x = y;
			y = z;
			cout << z;
		}
	}
	_getch();
	return 0;
}