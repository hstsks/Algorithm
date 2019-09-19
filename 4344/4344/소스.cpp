#include <iostream>
using namespace std;

int main()
{
	int c, n;
	int N[1008];
	cin >> c;
    for (int i = 0 ; i < c; i++) {
		int a = 0;
		float u = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> N[j];
			a = a + N[j];
		}
		a = a / n;
		for (int j = 0; j < n; j++) {
			if (N[j] > a) {
				u = u + 1;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << (100 * u) / n << endl;
	}
}

