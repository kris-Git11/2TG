#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,b;
    cin >> a >> b;
    if(a<100|| b<100 || a>999 || b >999)
    {
        cout << "unesi troznamenkaste brojeve."<<endl;;
        cin >> a >> b;
    }

    if(b<a)
    {
        swap(a,b);
    }

    int o=-1;
    for(int i=a; i<=b; i++)
    {
        o++;
        if(o==10)
        {
            cout << endl;
            o=0;
        }
        int x=i;
        int br=0;
        br+=x/100;
        x=x%100;
        br-=x/10;
        x=x%10;
        br+=x;
        if(br==0)
        {
            cout <<"*"<<i<<"* ";
        }
        else
        {
            cout << i << " ";
        }

    }
}
