#include <iostream>
using namespace std;

int main() {
	int num[9];
    int check[9] = { 0, };
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			int sum = 0;
			for (int k = 0; k < 9; k++) {
				if (k == i || k == j) {
					continue;
				}
				sum += num[k];
			}
			if (sum != 100) {
				continue;
			}
			for (int l = 0; l < 9; l++) {
				if (l == i || l == j) {
					check[l] = 1;
				}
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (check[i] == 1)
		{
			num[i] = 100;
		}
	}
	for (int i = 0; i < 9; i++)
	{
		int null;
		for (int j = i + 1; j < 9; j++)
		{
			if (num[i] > num[j])
			{
				null = num[i];
				num[i] = num[j];
				num[j] = null;
			}
		}
	}
	for (int i = 0; i < 7 ; i++)
	{
		cout << num[i] << endl;
	}
}