#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n>9 && n <100 && n/10 != n%10)
    {
        int prvi_sljedeci;
        if(n%5==0)
        {
            prvi_sljedeci=n;
        }else
        {
            prvi_sljedeci=((n/5)+1)*5;
        }
        int br=0;
        for(int i=10;i<=prvi_sljedeci;i++)
        {
            if(br==5)
            {
                cout << endl;
                br=0;
            }
            cout << i <<" ";
            br++;
        }
    }
}
