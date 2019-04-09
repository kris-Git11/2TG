#include<bits/stdc++.h>
using namespace std;
//zadatak 5
string vrijeme(int s, int mi)
    {
        if (s > 12)
        {
            return "PM";
        }else
        {
            return "AM";
        }
    }


int main()
{
    int s,mi;
    cin >> s >> mi;
    if (vrijeme(s,mi)== "PM")
    {
        cout << (s-12) << ":"<< mi << "PM"<< endl;
    }else
    {
        cout << s << ":"<< mi << "AM"<< endl;
    }
}
