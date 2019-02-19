#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, b, z1, z2, z3;

	cout << "Upisi troznamenkasti broj" << endl;
	cin >> a >> b;

	if (a <= 99 && a > 999)
	{
		cout << "Prvi broj nije dobar" << endl;

	if (b <= 99 && b > 999)
		cout << "Drugi broj nije dobar" << endl;
	}


	if (a > b) {
		for (int i = a; i <= b; i++) {

		z1 = i % 10;
		z2 = i / 10 % 10;
		z3 = i / 100 % 10;

		if (z1 + z3 == z3)
			cout << "*" << i << "*" <<endl;
	        
		cout << i << endl;


									}

	          }





			








    return 0;
}

