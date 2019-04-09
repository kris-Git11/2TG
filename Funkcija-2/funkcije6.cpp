#include <iostream>
#include <cmath>
using namespace std;

int sekunda(int x, int y, int z, int q)
{
    int s;
    if(x==z)
    {
        if(y<q)
        {
            s=q-y;
            s=s*60
        }
        else
        {
            x++;
            y=60-y;
        }
    }
}
int main()
{
int a, b;
cin>>a>>b>>c>>d;
cout<<sekunda(a,b,c,d);

return 0;
}


