#include <iostream>
using namespace std;


int main()
{
	int a, b, x, y, z, q;
	cin >> a >> b;

	if (a < b) {
		for (int i = a; i <= b; i++) {
            q++;
			x = i % 10;
			y = i / 10 % 10;
			z = i / 100 % 10;
			if (x + z == y) {
				cout << '+' << i << '+' << ' ';
			}
			else cout << i << ' ';
            if (q == 10)cout << '\n';
		}
	}
	else for (int i = a; i <= b; i++) {
		x = i % 10;
		y = i / 10 % 10;
		z = i / 100 % 10;
		if (x + z == y) {
			cout << '+' << i << '+' << ' ';
		}
		else cout << i << ' ';
		if (q == 10) cout << '\n';
	}

    return 0;
}
