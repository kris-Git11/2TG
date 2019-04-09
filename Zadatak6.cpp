#include <math.h>
#include <iostream>
using namespace std;

int sek(int sec1, int sec2) {
	if (sec1 < sec2) { return (sec2 - sec1);}
	else return (86400 - sec1 + sec2);
}

int main() {
	int h1, min1, h2, min2, sek1, sek2;
	cin >> h1 >> min1 >> h2 >> min2;
	sek1 = h1 * 3600 + min1 * 60;
	sek2 = h2 * 3600 + min2 * 60;
	cout << sek(sek1, sek2) << endl;
}
