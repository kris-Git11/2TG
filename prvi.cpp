#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, J, D, S;

	cout << "Unesite prvi troznamenkasti broj." << endl;
	cin >> a;
	cout << "Unesite drugi troznamenkasti broj." << endl;
	cin >> b;

	if ((a && b) <= 99)
	{
		cout << "Premalen broj." << endl;
	}

	if ((a && b) >= 1000)
	{
		cout << "Prevelik broj." << endl;
	}

	if (b < a)
	{
		swap(a, b);
	}

	D = a / 10;
	D = b / 10;
	J = a - (D * 10);
	J = b - (D * 10);

	if (D = J + S)
	{
		cout << "*" << a << "*" << endl;
	}

	if (D = J + S)
	{
		cout << "*" << b << "*" << endl;
	}



    return 0;
}
