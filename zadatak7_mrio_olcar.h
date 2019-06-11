#include <iostream>
using namespace std;

void a1()
{
	cout << "wwwww ";
}

void a2()
{
	cout << "wowow ";
}

//++++++++++++++++++++++

void b1()
{
	cout << "++++++++++ ";
}

void b2()
{
	cout << " ++oo++oo++ ";
}

//++++++++++++++++++++++

void c1()
{
	cout << "+++++++++ ";
}

void c2()
{
	cout << "+vvv+vvv+ ";
}

void e()
{
	cout << "\n";
}

int main()
{
	//+++++++++++++++++++++++
	a1();
	a2();
	a1();
	a2();
	a1();
	e();
	e();
	//+++++++++++++++++++++++
	b1();
	b1();
	b2();
	b2();
	b1();
	b1();
	b2();
	b2();
	b1();
	b1();
	e();
	e();
	//+++++++++++++++++++++++
	c1();
	c2();
	c2();
	c2();
	c1();
	c2();
	c2();
	c2();
	c1();

	e();
	e();
	
}