//Marin Šalaj

#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e;
    int a1,b1,c1,d1,e1;

    cout<<"unesi 2 broja"<<endl;
    cin>>a>>a1;


    if (a>9 && a<99 && a1>9 && a1<99)
    {
        if(a>a1)
        {
            if((a-a1)<20)
            {
                for (int i=a1; i<=a; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<a<<" "<<a1<<endl;
        }
        else
        {
            if((a1-a)<20)
            {
                for (int i=a; i<=a1; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<a<<" "<<a1<<endl;


        }

    }
    else
        cout<<a<<" "<<a1<<endl;


    cout<<"unesi jos 2 broja"<<endl;
    cin>>b>>b1;

    if (b>9 && b<99 && b1>9 && b1<99)
    {
        if(b>b1)
        {
            if((b-b1)<20)
            {
                for (int i=b1; i<=b; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<b<<" "<<b1<<endl;
        }
        else
        {
            if((b1-b)<20)
            {
                for (int i=b; i<=b1; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<a<<" "<<a1<<endl;



        }
    }
    else
        cout<<b<<" "<<b1<<endl;


    cout<<"unesi jos 2 broja"<<endl;
    cin>>c>>c1;

    if (c>9 && c<99 && c1>9 && c1<99)
    {
        if(c>c1)
        {


            if((c-c1)<20)
            {
                for (int i=c1; i<=c; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<c<<" "<<c1<<endl;
        }
        else
        {
            if((c1-c)<20)
            {
                for (int i=c; i<=c1; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<c<<" "<<c1<<endl;


        }
    }
    else
        cout<<c<<" "<<c1<<endl;



    cout<<"unesi jos 2 broja"<<endl;
    cin>>d>>d1;


    if (d>9 && d<99 && d1>9 && d1<99)
    {
        if(d>d1)
        {


            if((d-d1)<20)
            {
                for (int i=d1; i<=d; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<d<<" "<<d1<<endl;

        }
        else
        {
            if((d1-d)<20)
            {
                for (int i=d; i<=d1; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<d<<" "<<d1<<endl;
        }
    }
    else
        cout<<d<<" "<<d1<<endl;





    cout<<"unesi jos 2 broja"<<endl;
    cin>>e>>e1;

    if (e>9 && e<99 && e1>9 && e1<99)
    {
        if(e>e1)
        {


            if((e-e1)<20)
            {
                for (int i=e1; i<=e; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<e<<" "<<e1<<endl;

        }
        else
        {
            if((e1-e)<20)
            {
                for (int i=e; i<=e1; i++)
                {
                    cout << i <<" ";

                }
                cout<<endl;
            }
            else
                cout<<e<<" "<<e1<<endl;

        }
    }
    else
        cout<<e<<" "<<e1<<endl;


    return 0;

}




