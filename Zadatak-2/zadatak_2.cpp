#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char z=0;
    int o;
    cin>>z;
    cin>>a>>b;
    switch (z)
    {
        case 'a':{cout<<a+b<<endl; break;}
        case 'b':
            {
                 if(a<b)
                    {
                        cout<<b<<endl;
                    }
                  else
                    {
                        cout<<a<<endl;
                    }
                    break;
            }
        case 'c':
            {
                cout<<(a+b)/2<<endl;
                cout<< sqrt(a*b)<<endl;
                break;
            }
        case 'd':
            {
                if(a<b)
                {
                    o==0;
                    for(int i=a; i<=b; i++)
                        {
                            o=o+1;
                            if(i%2==1)
                                {
                                    cout<<i<<" ";
                                }
                            else
                                {
                                    cout<<"";
                                }
                            if(o==5)
                                {
                                cout<<endl;
                                o==0;
                                }
                            else {}
                        }
                }
                else
                {
                    o==0;
                    for(int i=b; i<=a; i++)
                        {
                            o=o+1;
                            if(i%2==1)
                                {
                                    cout<<i<<" ";
                                }
                            else
                                {
                                    cout<<"";
                                }
                            if(o==5)
                                {
                                    cout<<endl;
                                    o==0;
                                }
                            else {}
                        }
                }
                break;
            }
        case 'e':
            {

            }
    }

    return 0;
}


