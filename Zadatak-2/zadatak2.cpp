#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b,y;
    char o;
    cin >> a >> b;
    cin >> o;

    switch(o)
    {
        case('a'):
        {
            cout << a+b << endl;
        }
        case('b'):
        {
            if (a>b)
            {
                cout << a << endl;
            }else
                cout << b << endl;
        }
        case('c'):
        {
            cout << (a*b)/2 << endl;
            cout << sqrt(a*b) << endl;
        }
        case ('d'):
        {
            for (int i=a;i<=b;i++)
            {
                if(y==5)
                {
                    cout << endl;
                    y=0;
                }
                if (i%2!=0)
                {
                    cout<< i <<" ";
                    y++;
                }
            }
        }
        case('e'):
        {

        }
    }
}
