#include<bits/stdc++.h>
using namespace std;


double povrsina_pravokutnika(int a, int b)
{
    return a*b;
}
double povrsina_opisane_kruznice(int a, int b)
{
    double r=(sqrt((a*a)+(b*b)))/2;
    return r*r*3.14;
}

int main()
{
    double a,b;
    cin >> a >> b;
    cout << povrsina_pravokutnika(a,b)<<endl;
    cout << povrsina_opisane_kruznice(a,b)<<endl;
}
