#include "stdafx.h"
#include <iostream>
using namespace std;

// Zadatak 1.

int sati(int, int);
int minute(int, int);
int sekunde(int, int);


int sati(int x, int y) { return x,y; }
int minute(int x, int y) { return }
int sekunde(int x, int y) {return }


int main()
{
	int x, y;

	cout << "Unesi prvi broj (sati)." << endl;
	cin >> x;
	cout << "Unesi drugi broj (minute)." << endl;
	cin >> y;

	if ((1 >= x <= 12) & (0 >= y <= 60))
		cout << x << ":" << y << " AM" << endl;

	else if ((12 > x <= 24) & (0 >= y <= 60))
		cout << x << ":" << y << " PM" << endl;

	else
		cout << "Krivi broj." << endl;

	 


    return 0;
}
