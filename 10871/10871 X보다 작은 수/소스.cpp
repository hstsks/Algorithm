#include <iostream>
using namespace std;

int main() {
	int n, x;
	int M[10003];
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> M[i];
	}
	for (int i = 0; i < n; i++) {
		if (M[i] < x) {
			cout << M[i] << " ";
		}
	}
}