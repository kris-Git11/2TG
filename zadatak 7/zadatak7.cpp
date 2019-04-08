#include<bits/stdc++.h>
using namespace std;


bool pravokutni_trokut(double a,double b,double c)
{
    if(a>b && a >c)
    {
        return (sqrt((b*b)+(c*c))==a);
    }else if(b>a && b > c)
    {
        return (sqrt((a*a)+(c*c))==b);
    }else
    {
        return (sqrt((a*a)+(b*b))==c);
    }
}

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    cout << pravokutni_trokut(a,b,c);
}
