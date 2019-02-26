#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a, b, y=0;
    char operacija;
    cin >> a >> b;
    cout << "Unesite znak operacije: ";
    cin >> operacija;

    switch (operacija)
    {
    case '+':
        cout << "Zbroj: " << a+b << endl;
    case 'a':
    case 'A':
        cout << "Aritmeticka sredina je: " << (a*b)/2 <<endl;
    case 'g':
    case 'G':
        cout << "Geometrijska sredina je: " << sqrt(a*b)<<endl;
    case 'v':
    case 'V':
        cout << "Veci broj je: ";
        {
            if (a>b)
            {
                cout << a << endl;
            }
            else
            {
                cout << b << endl;
            }
        }
    case 'n':
    case 'N':
        cout << "Neparni brojevi: " << endl;
        {
            for (int i=a; i<b; i++)
            {
                if(i%2!=0)
                {
                    cout << i<<" ";
                    y++;
                }
                if(y==5)
                {
                    cout << endl;
                    y=0;
                }
            }
        }
    case 'k':
    case 'K':
    {
        int p1=a,p2=b;
        for(int i=0;true;i++)
        {
            if(p1==p2)
            {
              cout << p1;
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
}
