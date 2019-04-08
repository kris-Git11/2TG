#include<bits/stdc++.h>

using namespace std;

string ChangeCase(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]-0>=97 && a[i]-0<=122)
        {
            a[i]=char(a[i]-0-32);
        }else if(a[i]-0>=65 && a[i]-0<=90)
        {
            a[i]=char(a[i]-0+32);
        }
    }
    return a;
}

int main()
{
    string a;
    cin >> a;
    a=ChangeCase(a);
    cout << a;
}
