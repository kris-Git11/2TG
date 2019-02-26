#include <bits/stdc++.h>
#define pi 3.141
using namespace std;
int main ()
{
    int a;
    int b;
    double j;
    double d;
    int br=0;
    char x;
    cin>>a;
    cin>>b;
    cin>>x;
    j=(a+b)/(double)2;
    d=sqrt(a*b);



    switch(x)
    {
    case 'a':
    {
        cout<<"zbroj je "<<a+b <<endl;
        break;
    }
    case 'b':
    {
        if(a>b)
        {
            cout<<"veci broj od dva je : "<< a<<endl;
        }
        else
        {
            cout<<"veci broj od dva je : "<< b<<endl;
        }
        break;
    }

    case 'c':
    {
        cout<<"aritmeticka sredina "<< j<<endl;
        cout<<"geometrijska sredina je "<< d<<endl;
        break;
    }
    case 'd':
    {
        if(b<a)
        {
            swap(a,b);
        }

        for (int i=a; i<b; i++)
        {

            if(i%2!=0)
            {
                cout << i <<" ";
                br=br+1;

            }

            if (br==5)
            {
                cout<<endl;
                br=0;
            }
        }
        break;


    }

    case 'e':

        cout<<"najmanji zajednicki visekratnik je: "<<endl;
        int p1=a,p2=b;
      while(true)
        {

            if(p1==p2)
            {
                cout<<p1<<endl;
                return 0;
            }
            if(p1<p2)
            {
                p1+=a;

            }
            else
            {
                p2+=b;
            }

        }
    }


    return 0;
}


