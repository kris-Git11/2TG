#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	char x;
	cin >> x;
	if (x == 'a')
	{
		cout << a + b;
	}
	if (x == 'b')
	{
		cout << max(a, b);
	}
	if (x == 'c')
	{
		cout << (a + b) / (double)2 << endl;
		cout << sqrt((a*b));
	}
	if (x == 'd')
	{
		if (b<a)
		{
			swap(a, b);
		}
		int y = 0;
		for (int i = a; i<b; i++)
		{
			if (y == 5)
			{
				cout << endl;
				y = 0;
			}
			if (i % 2 != 0)
			{
				cout << i << " ";
				y++;
			}
		}
	}
	if (x == 'e')
	{
		for (int i = 2; i<max(a, b); i++)
		{
			if (a%i == 0 && b%i == 0)
			{
				cout << i;
				return 0;
			}
		}
		cout << a * b;
	}

