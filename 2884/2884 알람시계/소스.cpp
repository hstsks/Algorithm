#include <iostream>
using namespace std;

int main()
{
	int h, m;
	cin >> h >> m;
	if (h == 0 && m < 45) {
		h = 23;
		m = m + 15;
	}
	else if (h > 0 && m < 45) {
		h = h - 1;
		m = m + 15;
	}
	else {
		m = m - 45;
	}
    cout << h << " " << m;
	//전 개 빡대가리였습니다;;
}