#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
//ime i prezime: Karlo Grabant
int main()
{
   int a, b, c, p1, r=0, d, j;
   /*a-varijabla prvog dvoznamenkastog,
   b- varijabla drugog dvoznamenkastog,
   c- varijabla broja s koji unosimo (dijelivost sa 5)
   p1- pomoæna
   r- borjaè za redove
   d -desetice
   j- jedinice*/
   cin>>a>>b;
   if (a>=10 && b>=10 && a<=99 && b<=99 && a!=b)
   {
           if (a>b){swap(a,b);}
       cin>>c;
       p1=c/5;
       p1++;
       p1=p1*5;
       cout<<p1<<endl;
       for(int i=10; i<=p1; i++)
        {

            cout<<i<<" ";
            r=r+1;
            if (r==5)
                {
                    cout<<endl;
                    r=0;
                }
            if(i>=p1)
            {
                break;
            }
        }
        cout<<endl;
        d=p1/10;
        j=p1-d;
        for(int r=1; r<=d; r++)
        {
            cout<<"+";
            if(r==d){cout<<endl;}
        }
        for(int j=0; j<d-2; j++)
        {
            if (j==0 || j==d-2){cout<<"+";}
            if (j!=0 || j!=d-2){cout<<"o";}
            if (j==d)
                {
                    cout<<endl;
                    cout<<"+";
                }
        }
   }
   else

    return 0;
}




