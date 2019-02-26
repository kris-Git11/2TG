#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, x, y, s, d, j;
    cin>>x>>y;
    if (x<100 || x>999 || y<100 || y>999)
    {
        cout<<"Jedan od brojeva nije troznamenkasti.";
    }
    else
    {
        if (x<y)
        {
            int o=-1;
            for (int i=x; i<=y; i++)
            {
                o++;
                if(o==10)
                {
                    cout<<endl;
                    o=0;
                }
                a=i;
                s=a/100;
                j=a%100;
                j=j%10;
                d=(a-(s*100))/10;
                if (s+j==d)
                {
                    cout<<"*"<<a<<"* ";
                }
                else
                    cout<<a<<" ";
            }
        }
        else
        {
            int o=-1;
            for (int i=y; i<=x; i++)
            {
                o++;
                if(o==10)
                {
                    cout<<endl;
                    o=0;
                }
                a=i;
                s=a/100;
                j=a%100;
                j=j%10;
                d=(a-(s*100))/10;
                if (s+j==d)
                {
                    cout<<"*"<<a<<"* ";
                }
                else
                    cout<<a<<" ";
            }
        }
    }
    return 0;
}


