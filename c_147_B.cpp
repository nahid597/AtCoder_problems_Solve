

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    string s;

    cin >> s;

    int n = s.size();

    for(int i = 0; i < n; i++)
    {
        if(s[i] != s[n-1-i])
           cnt++;
    }

    cout << cnt/2 << endl;

    return 0;
}
