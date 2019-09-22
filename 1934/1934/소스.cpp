#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	for (int t = 0; t < number; t++)
	{
	    int num1, num2, component = 1;
		cin >> num1 >> num2;
		if (num1 >= num2)
		{
			for (int i = 1; i <= num2; i++)
			{
				if (num1 % i == 0 && num2 % i == 0)
				{
					component = i;
				}
			}
		}
		else
		{
			for (int i = 1; i <= num1; i++)
			{
				if (num1 % i == 0 && num2 % i == 0)
				{
					component = i;
				}
			}
		}
		cout << (num1 * num2 / component) << endl;
	}
}