#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int a, b;
  cin >> a >> b;
  if (a/100<1 || b/100<1)
  {
    cout << "Unesite troznamenkasti broj:" << endl;
    cin >> a >> b;
  }
  if (b<a)
  {
    swap (a,b);
  }
  for (int i=a; i<b; i++)
  {
    int x=i;
    int br=0;
    br+=x/100;
    x=x%100;
    br-=x/10;
    x=x%10;
    br+=x;
    if (br==0)
    {
      cout << "*" <<i<<"* ";
    }
    else
    {
      cout <<i<< " ";
    }
  }
  return 0;
}
