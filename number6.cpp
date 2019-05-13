#include <iostream>

using namespace std;
int main()
{
	int num1, num2, sumnum = 0;
	cout << "Enter a number: ";
	cin >> num2;

	while (num2 > 0)
	{
		sumnum = 0;
		for (num1 = 1; num1 <= num2; ++num1)
		{
			sumnum += num1;
		}
		cout << "The sum of all whole numbers from 1 to " << num2 << " is " << sumnum << "." << endl;
		cout << "Enter a number: ";
		cin >> num2;
	}

	cout << "Thank you!" << endl;
	system("pause");
	return 0;

}
