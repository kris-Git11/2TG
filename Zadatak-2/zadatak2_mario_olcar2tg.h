#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int a, b;
	int j = 1;
	int brojac;
	char c;
	cout << "upisi prvi broj ";
	cin >> a;
	cout << "upisi drugi broj ";
	cin >> b;
	cout << "\n";
	cout << "Upisi znak za zeljenu operaciju\n";
	cout << "(a - zbroj)\n";
	cout << "(b - broj veci od ta dva broja)\n";
	cout << "(c - aritmeticka i geometrijska sredina)\n";
	cout << "(d - svi neparni brojevi izmedu ta dva broja)\n";
	cout << "(e - najmanji zajednicki visekratnik)\n";
	cin >> c;
	switch (c)
	{
	case ('a'):
	{
		int zbroj;
	zbroj = a + b;
	cout << "Zbroj je " << zbroj << endl;
	}
	break;

	case('b'):
	{
		int broj;
			if (a >= b)
			{
				broj = a + 1;
			}
			else
			{
				broj = b + 1;
			}
			cout << "broj koji je veci od oba broje je " << broj << endl;
	}
	break;
	case('c'):
	{
		double sredina;
		sredina = (a + b) / 2;
		cout << "Aritmeticka sredina je " << sredina << endl;
		double geo;
		geo = sqrt(a*b);
		cout << "Geometrijska sredina je " << geo << endl;
	}
	break;
	case('d'):
	{
		if (a < b)
		{
			for (int i = 1; i <= (b-a)/2; i++)
			{
				
				if (a % 2 == 0)
				{
					brojac = a + 2 * i - 1;
					cout << brojac << " ";
				}
				else
				{
					brojac = a + 2 * i;
					cout << brojac << " ";
				}
				if (j % 5 == 0)
				{
					cout << "\n";
				}
				j = j + 1;
			}
		}
		else
			for (int i = 1; i <= (a-b)/2; i++)
			{
				
				if (a % 2 == 0)
				{
					brojac = b + 2 * i - 1;
					cout << brojac << " ";
				}
				else
				{
					brojac = b + 2 * i;
					cout << brojac << " ";
				}
				if (j % 5 == 0)
				{
					cout << "\n";
				}
				j = j + 1;
			}
			
	}
	break;
	case ('e'):
	{
		int visekratnik;
		for (int i = 1; i <= a; i++)
		{
			if (b * i % a == 0)
			{
			visekratnik = i * b;
				break;
			}

		}
		cout <<"Najmanji zajednicki visekratnik je " << visekratnik;
	}
	break;
	default: {cout << "nesipravan unos"; }
	}
}