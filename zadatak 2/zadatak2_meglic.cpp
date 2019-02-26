#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    char x;
    cin >> x;
    if(x=='a')
    {
        cout << a+b;
    }
    if(x=='b')
    {
        cout << max(a,b);
    }
    if(x=='c')
    {
        cout << (a+b)/(double)2<<endl;
        cout << sqrt((a*b));
    }
    if(x=='d')
    {
        if(b<a)
        {
            swap(a,b);
        }
        int y=0;
        for(int i=a;i<=b;i++)
        {
            if(y==5)
            {
                cout << endl;
                y=0;
            }
            if(i%2!=0)
            {
                cout << i<<" ";
                y++;
            }
        }
    }
    if(x=='e')
    {
        int p1=a,p2=b;

        while(true)
        {
            if(p1==p2)
            {
                cout << p1<<endl;
                return 0;
            }
            if(p1<p2)
            {
                p1+=a;
            }else
            {
                p2+=b;
            }
        }
        cout << a*b;
    }
}
