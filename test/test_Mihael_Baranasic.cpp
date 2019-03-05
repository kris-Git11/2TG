#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, y=0;
    cin >> a;
    {
      if (a>=10)
      {
      for (int i=10; i<=a; i++)
      {
        if (i%5==0)
        {
          cout << i << " ";
          y++;
        }
        if (y==5)
        {
          cout << endl;
          y=0;
        }
      }
      }
        else
        {
          cout << "Broj nije dvoznamenkasti." << endl;
        }
    }
    cout << endl;

    //2. zadatak

    int d=a/10;
    int z=a%10;

  if (d>z)
  {
    for (int i=1; i<=d; i++)
    {
      cout << "+";
    }
      cout << endl;

    for (int i=1; i<=d-2;i++)
    {
      {
        cout << "+";
        cout << endl;
      }

    }
    for (int i=1; i<=d; i++)
    {
      cout << "+";
    }
    cout << endl;
  }

    return 0;
}
