#include <math.h>
#include <iostream>
using namespace std;

//ZADATAK 1-----------------------------------------------------------------------
char ap(int a) {
	char x;
	if (a >= 12 && a<24) { return x = 'P'; }
	else return x = 'A';
}

int main()
{
	int h, min;
	cin >> h >> min;
	cout << h << ':' << min << " " << ap(h) << 'M' << endl;
	return 0;
}
