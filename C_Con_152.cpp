#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;

    cin >> n;

    int p[n+2];
    int q = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    int cnt = 0;

     for(int i = 0; i < n; i++)
    {
        if(p[i] < q)
        {
           cnt++;
           q = p[i];
        }
    }

    cout << cnt << endl;



    return 0;
}

