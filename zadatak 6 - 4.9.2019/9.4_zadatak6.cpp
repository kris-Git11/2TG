#include<bits/stdc++.h>
using namespace std;


int razlika(int h1, int m1, int s1, int h2, int m2, int s2, int sek1, int sek2)
{
    sek1 = ((h1*60*60) + (m1*60) + s1);
    sek2 = ((h2*60*60) + (m2*60) + s2);

    if (sek1 < sek2)
    {
        return (sek2-sek1);
    }else
    {
        return ((24*60*60)-sek2);
    }
}

int main()
{
    int h1,m1,s1,h2,m2,s2,sek1,sek2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    cout << razlika(h1,m1,s1,h2,m2,s2,sek1,sek2);

}
