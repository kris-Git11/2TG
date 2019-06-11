#include <iostream>
using namespace std;

char AP(int h, int)
{
	if (h < 12)
		{
		return 'A';
		}
	else if(h > 12 && h < 24)
		{
		return 'P';
		}
	else 
		{
		return '*';
		}
}

int main()
{
	int h, m;
	cout << "Unesi sate(0-24): ";
	cin >> h;
	
	cout << "Unesi minute(0-59): ";
	cin >> m;
	if (h < 24 && h < 60) 
	{
		cout << h << ":" << m << " " << AP(h, m) << "M" << endl;
	}
	else
	{
		cout << "Neispravan unos\n";
	}
}
