#include<bits/stdc++.h>
using namespace std;

char prije_poslije(int h,int m)
{
    if(h>12)
    {
        return 'P';
    }else
    {
        return 'A';
    }
}

int main()
{
    int h,m;
    cin >> h >> m;
    if(prije_poslije(h,m)=='P')
    {
        if(h-12<10)
        {
            cout <<"0"<<h-12<<":";
        }else
        {
            cout <<h-12<<":";
        }
        if(m<10)
        {
            cout <<"0"<<m<<" PM";
        }else
        {
            cout <<m<<" PM";
        }
    }else if(prije_poslije(h,m)=='A')
    {
        if(h<10)
        {
            cout <<"0"<<h<<":";
        }else
        {
            cout <<h<<":";
        }
        if(m<10)
        {
            cout <<"0"<<m<<" AM";
        }else
        {
            cout <<m<<" AM";
        }
    }
}
