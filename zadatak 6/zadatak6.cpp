#include<bits/stdc++.h>

using namespace std;

int zajednicka_mjera(int a, int b)
{
    int rj;
    for(int i=1;i<min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            rj=i;
        }
    }
    return rj;
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << zajednicka_mjera(a,b);
}
