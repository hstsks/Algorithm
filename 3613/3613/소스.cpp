#include <iostream>
#include <string>
using namespace std;

int main()
{
	int CheckJava = 0, CheckC2plus = 0;
	string Code;
	cin >> Code;
	for (int i = 0; i < Code.length(); i++)
	{
		if (Code[i] == '_') {
			CheckC2plus = 1;
		}
		else if (Code[i] > 64 && Code[i] < 91)
		{
			CheckJava = 1;
		}
	}

	if (CheckC2plus == 1 && CheckJava == 1)
	{
		cout << "Error!";
	}
	else if (CheckJava == 1 && CheckC2plus == 0)
	{
		for (int i = 0; i < Code.length(); i++)
		{
			if (Code[i] > 64 && Code[i] < 91)
			{
				cout << "_" << char(Code[i] + 32);
			}
			else
			{
				cout << char(Code[i]);
			}
		}
	}
	else if (CheckC2plus == 1 && CheckJava == 0)
	{
		for (int i = 0; i < Code.length(); i++)
		{
			if (Code[i] == '_')
			{
				cout << char(Code[++i] - 32);
			}
			else
			{
				cout << char(Code[i]);
			}
		}
	}
}