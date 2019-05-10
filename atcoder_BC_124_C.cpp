
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    cin >> s;

    int sz = s.size();

    int cnt = 0;

    char a;

    for(int i = 0; i < sz; i++)
    {
        if(s[i] == s[i+1])
        {
            cnt++;

            if(s[i] == '1')
                a = '0';
            else
                a = '1';
             s[i+1] = a;

        }
    }

    cout << cnt << endl;

    return 0;
}
