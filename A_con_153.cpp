#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n, k, m;

    cin >> n >> k >> m;

    int a[n+5];

    for(int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }

    int st = 0, need = 0;


    for(int i = 0; i < n-1; i++)
    {
       st += a[i];
    }

    need = n * m;

    int ans = need - st;

      if(ans  < 0)
      {
         ans = 0;
      }

     else if(ans > k)
      {
         ans = -1;
      }

      cout << ans << endl;







    return 0;
}
