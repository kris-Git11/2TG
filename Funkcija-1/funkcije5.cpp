#include <iostream>
#include <cmath>
using namespace std;

int poslijepodne(int x, int y)
{
    if(x>12)
    {
        x=x-12;
        return true;
    }
    return x;

}
int prijepodne (int x, int y)
{
    if(x<13)
        return true;
}

int main()
{
int a, b;
cin>>a>>b;
if (poslijepodne(a,b)==1)
    cout<<a<<":"<<b<<" PM.";
if (prijepodne(a,b)==1)
    cout<<a<<":"<<b<<" AM.";

return 0;
}


