#include <iostream>
using namespace std;

int sek(int h1=0, int h2=0, int m1=0, int m2=0, int s1=0, int s2=0)
{
	int u1;
	int u2;
	//--------------------------------
	u1 = h1 * 3600 + m1 * 60 + s1;
	
	//--------------------------------
	
	u2 = h2 * 3600 + m2 * 60 + s2;
	//--------------------------------

	if (u1 < u2)
	{
		return u1 - u2;
	} else
	{
		return u1 - u2;
	}
}

int main()
{
	int h1, h2, m1, m2, s1, s2;
	cout << "Upisi vrijeme pocetka (h m s): ";
	cin >> h1;
	cin >> m1;
	cin >> s1;
	cout << "Upsisi vrijeme kraja (h m s): ";
	cin >> h2;
	cin >> m2;
	cin >> s2;
	cout << "Od vremena pocetka pocetka do vremena kraja proslo je " << sek(h1, h2, m1, m2, s1, s2) << " sekundi\n";
}