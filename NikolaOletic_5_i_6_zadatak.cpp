#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;

//5 ZADATAK
char ap(int a) {
	char x;
	if (a >= 12 && a<24) { return x = 'P'; }
	else return x = 'A';
}

int main()
{
	int h, m;
	cin >> h >> m;
	cout << h << ':' << m << " " << ap(h) << 'M' << endl;
	return 0;
}







//6 ZADATAK
int s(int sec1, int sec2) {
	if (sec1 < sec2) { return (sec2 - sec1); }
	else return (86400 - sec1 + sec2);
}

int main() {
	int h1, m1, h2, m2, s1, s2;
	cin >> h1 >> m1 >> h2 >> m2;
	
	s1 = h1 * 3600 + m1 * 60;
	s2 = h2 * 3600 + m2 * 60;
	cout << s(s1, s2) << endl;
}
