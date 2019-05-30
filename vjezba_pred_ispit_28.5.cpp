#include<bits/stdc++.h>
using namespace std;
//vjezba pred ispit

double hipotenuza (int a, int b)
{
     return sqrt((a*a) + (b*b));
}

void stranica (int a, int b, double &kvdr)
{
    kvdr = sqrt((a*b)/2);
    return;
}


void crtaj(int a,int b)
{
    if(a>=b)
    {
        for(int i=0; i<a-b; i++)
        {
            cout <<"*"<<endl;
        }
        for(int i=0; i<b; i++)
        {
            for(int j=0; j<i+1; j++)
            {
                cout << "*";
            }
            cout <<endl;
        }
    }else
    {
        for(int i=0; i<a-1; i++)
        {
            for(int j=0; j<i+1; j++)
            {
                cout << "*";
            }
            cout <<endl;
        }
        for(int i=0;i<b;i++)
        {
            cout <<"*";
        }
        cout << endl;
    }
}
int main()
{
    int a,b;
    double kvdr;
    cin >> a >> b;

    if (a > 2*b)
    {
        stranica(a,b,kvdr);
        cout <<kvdr<< endl;
    }
    cout << hipotenuza(a,b)<< endl;
    crtaj (a,b);
}
