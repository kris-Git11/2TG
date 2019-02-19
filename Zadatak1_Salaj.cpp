//Marin Šalaj 2.TG
#include <bits/stdc++.h>
#define pi 3.141
using namespace std;
int main ()
{
    int a,b;
    int j;
    int d;
    int s;
    int br=0;
    cin>>a;
    cin>>b;
    if(b<a)
    {
        swap(a,b);
    }

    if(a<100)
    {
        cout<<"nije unesen troznamenkasti broj"<<endl;
    return 0;
    }
    if(a<100)
    {
        cout<<"nije unesen troznamenkasti broj"<<endl;
    return 0;
    }

    if(a>999)
    {
        cout<<"nije unesen troznamenkasti broj"<<endl;
    return 0;
    }
    if(b>999)
    {
        cout<<"nije unesen troznamenkasti broj"<<endl;
    return 0;
    }



    for(int i=a; i<b; i=i+1)
    {



        int x=i;
        s=x/100;
        d=(x-s*100)/10 ;
        j=(x-s*100)-d*10;
        if(s+j==d)
        {
            cout << "*"<<i <<"* ";
        }
        else
        {
            cout << i<<" ";
        }

    br=br+1;
    if (br==10)
    {
        cout<<endl;
       br=0;
    }


    }

}




