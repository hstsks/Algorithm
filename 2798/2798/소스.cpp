#include <iostream>
using namespace std;

int main()
{
	int number;
	int card[107];
	int target;
	cin >> number >> target;
	for (int i = 0; i < number; i++)
	{
		cin >> card[i];
	}
	
	int marker = 300000;

	for (int i = 0; i < number - 2; i++)
	{
		for (int j = i + 1; j < number - 1; j++)
		{
			for (int k = j + 1; k < number; k++)
			{
				if (target < card[i] + card[j] + card[k])
				{
					continue
				}
				
				if (  (target - marker) > (target - card[i] - card[j] - card[k])  )
				{
					marker = card[i] + card[j] + card[k];
				}
			}
		}
	}
	cout << marker;

}