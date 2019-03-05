#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,d,broj_u_retku;
    cin >> a;
    d = a%11;
    if (a>9 && a < 100 && d!=0)
    {
        if((a%3)==0)
        {
            broj_u_retku==0;
            for(int i=a; i<=99; i++)
            {
                if (broj_u_retku==5)
                {
                    cout << endl;
                    broj_u_retku==0;
                }
                cout << i <<" ";
                broj_u_retku++;
            }

        }else
            broj_u_retku==0;
               if (broj_u_retku==5)
                {
                    cout << endl;
                    broj_u_retku==0;
                }
            for (int j=a; j<=99; j=j+3)
            {
                 if (broj_u_retku==5)
                {
                    cout << endl;
                    broj_u_retku==0;
                }

                cout << ((j/3)+1)*3<<" ";

            }
    }else
    cout <<"Greska";
}
