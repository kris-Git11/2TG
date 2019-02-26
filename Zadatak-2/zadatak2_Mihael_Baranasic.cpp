#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int a, b;
  char operacija;
  cin >> a >> b;
  cout << "Unesite znak operacije: ";
  cin >> operacija;

  switch (operacija)
  {
case '+':
  cout << "Zbroj: " << a+b << endl;
case 'a':
case 'A':
  cout << "Aritmeticka sredina je: " << (a*b)/2 <<endl;
case 'g':
case 'G':
  cout << "Geometrijska sredina je: " << sqrt(a*b)<<endl;
case 'v':
case 'V':
  cout << "Veci broj je: ";
  {
    if (a>b)
  {
    cout << a << endl;
  }
  else
  {
    cout << b << endl;
  }
  }
case 'n':
case 'N':
  cout << "Neparni brojevi: " << endl;
  {
  for (int i=a; i<b;i++)
    {
      if(i%2!=0)
      {
        cout << i<<" ";
      }
    }
  }
  }
  return 0;
}
