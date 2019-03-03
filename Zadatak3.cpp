#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    for (int i=0; i<5; i++)
        {
            cin >> a >> b;

    if (a>9 && a<100 && b>9 && b<100 && (a-b)<=20)
    {
        if (a>b)
        {
            swap (a,b);
        }

            for (int j=a; j<=b; j++)
                {
                    cout << j << " ";
                }
                cout << endl;
        }else
        {
            cout << a <<" "<< b << endl;
        }

    }
}
