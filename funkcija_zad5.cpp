#include <bits/stdc++.h>
using namespace std;

int sat (int h)
{
  if (h>=12 && h <=24)
  {
    return h;
  }
  else if (h<12 && h>=0)
  {
    return h;
  }
return 0;
}
int minuta (int m)
{
  if (m>=0 &&  m<=59)
  {
    return m;
  }
return 0;
}

int main ()
{
  int s, g;
  cin >> s >> g;
  cout << sat(s) << ":" << minuta (g);
  return 0;
}
