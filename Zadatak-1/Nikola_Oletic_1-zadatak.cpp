// ConsoleApplication53.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, b, x, y, z;
	cin >> a >> b;

	if (a < b) {
		for (int i = a; i <= b; i++) {
			x = i % 10;
			y = i / 10 % 10;
			z = i / 100 % 10;
			if (x + z == y) {
				cout << '+' << i << '+' << endl;
			}
			else cout << i << endl;
		}
	}
	else for (int i = a; i <= b; i++) {
		x = i % 10;
		y = i / 10 % 10;
		z = i / 100 % 10;
		if (x + z == y) {
			cout << '+' << i << '+' << endl;
		}
		else cout << i << endl;
	}

	return 0;
}