#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    int n , k;

    cin >> n >> k;
    cin >> s;



    s[k-1] = s[k-1] + 32;

    cout << s << endl;

    return 0;
}
