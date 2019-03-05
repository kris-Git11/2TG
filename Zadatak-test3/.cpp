
#include <bits/stdc++.h>
#define pi 3.141
using namespace std;
int main ()
{
    int a,b,d,j,c,e;
    cin>>a;
    d=a/10 ;
    j=a%10 ;

    if(a>9 && a<100 && d!=j)
    {
        if(a%3==0)
        {
            c=a;

        }

        else
        {
            c= ((a/3)+1)*3;
        }
        int br=0;
        for (int i=c; i<=99; i=i+3)
        {
            if (br==5)

            {

                cout<<endl;
                br=0;

            }



            cout << i <<" ";
            br=br+1;
        }



    }
    return 0;
}



