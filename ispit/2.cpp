#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n>9 && n <100 && n/10 != n%10)
    {
        int m=min(n/10,n%10);
        int x=max(n/10,n%10);
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<x; j++)
            {
                if(j==0 || i==0 || i==x-1 || j==x-1)
                {
                    cout << "+";
                }else if(i==m-1 && m!=1 && m!= 0)
                {
                    if(j%2==0)
                    {
                        cout << "x";
                    }else
                    {
                        cout << "o";
                    }
                }else
                {
                    cout << "o";
                }

            }
            cout << endl;
        }
    }
}
