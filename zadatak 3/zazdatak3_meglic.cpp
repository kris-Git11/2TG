#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int x,y;
    for(int i=0;i<5;i++)
    {
        cin >> x>>y;
        if(x>9 && x<100 && y>9 && y<100 && abs(x-y)<=20)
        {
            if(x>y)
            {
                swap(x,y);
            }
            for(int i=x;i<=y;i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }else
        {
            cout <<x <<" "<<y<<endl;
        }

    }
 }

