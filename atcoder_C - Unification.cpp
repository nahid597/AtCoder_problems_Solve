

#include<bits/stdc++.h>

using namespace std;


int main()
{

    string s;

    cin >> s;

    int sz = s.size();
    int c0 = 0, c1 = 0;

    for(int i = 0; i < sz; i++)
    {
        if(s[i] == '0')
          c0++;
        else
           c1++;
    }

    cout << min(c0,c1) * 2 << endl;


    return 0;
}
