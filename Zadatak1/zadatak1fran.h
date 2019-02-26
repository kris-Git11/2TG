#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, b, c, d, e;
	cin >> a >> b;

	if (a < b) {
		for (int i = a; i <= b; i++) {
			c = i % 10;
			d = i / 10 % 10;
			e = i / 100 % 10;
			if (c + e == d) {
				cout << '+' << i << '+' << endl;
			}
			else cout << i << endl;
		}
	}
	else for (int i = a; i <= b; i++) {
		c = i % 10;
		d = i / 10 % 10;
		e = i / 100 % 10;
		if (c + e == d) {
			cout << '+' << i << '+' << endl;
		}
		else cout << i << endl;
	}

	return 0;
}
