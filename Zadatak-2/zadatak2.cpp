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
            cout << a+b << endl;break;
        }
        case('b'):
        {
            if (a>b)
            {
                cout << a << endl;break;
            }else
                cout << b << endl;break;
        }
        case('c'):
        {
            cout << (a*b)/2 << endl;
            cout << sqrt(a*b) << endl;break;
        }
        case ('d'):
        {
            for (int i=a;i<=b;i++)
            {
                if (i%2!=0)
                {
                    y=0;
                    cout<< i <<" ";
                    y++;

                if(y==5)
                {
                    cout << endl;
                    y=0;
                }

            }
        }
        case('e'):
        {
            int p1=a, p2=b;
            while(true)
            {
                if (p1==p2)
                {
                    cout << p1<< endl;
                    return 0;
                }
                if (p1<p2)
                {
                    p1+=a;
                }else
                {
                    p2+=b;
                }
            }
        }

    }
}
}

