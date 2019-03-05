
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    for(int i=0; i<5; i++)
    {
        cin>>a>>b;
        if(b<a){swap(a,b);}
        if(a>=10 && b>=10 && a<=99 && b<=99 && b-a<=20)
        {
            for(int p=a; p<=b; p++)
                cout<<p<<" ";
        }
        else
        {
            cout<<a<<" "<<b<<endl;
        }

    }


    return 0;
}



