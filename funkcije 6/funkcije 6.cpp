#include<bits/stdc++.h>
using namespace std;

int razlika(int h_1,int m_1,int s_1,int h_2,int m_2,int s_2)
{
    int v1=(h_1*60+m_1)*60+s_1;
    int v2=(h_2*60+m_2)*60+s_2;
    if(v2-v1>0)
    {
        return v2-v1;
    }else
    {
        return 86400-v1+v2;
    }
}

int main()
{
    int h_1,m_1,s_1;
    int h_2,m_2,s_2;
    cin >> h_1 >> m_1 >> s_1;
    cin >> h_2 >> m_2 >> s_2;
    cout << razlika(h_1,m_1,s_1,h_2,m_2,s_2);
}
