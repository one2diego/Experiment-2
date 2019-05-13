#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int counter;
	cout << "Counting... \n";
	for (counter = 1; counter <= 10; counter++)
	{
		cout << counter << ",";
	}
	for (counter = 12; counter <=30; counter += 2)
	{
		
		if (counter == 30)
		cout << counter << ".";
		else  
		cout << counter << ",";
	}
	_getch();
	return 0;
}