#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b;
   for (int i=0; i<5; i++)
   {
    cin >> a >> b;
    if (b<a)
    {
        swap (a,b);
    }
   if (a>9 && a<100 && b>9 && b<100 && abs(a-b)<20)
   {
       for (int j=a; j<=b; j++)
        cout << j << " ";
   }
   else
    cout << a << " " << b;
    cout << endl;
  }


  return 0;
}
