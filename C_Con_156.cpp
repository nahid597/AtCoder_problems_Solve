
#include<bits/stdc++.h>

using namespace std;

int main()
{

   int n;
   cin >> n;

   int x[n+2];

   int sum = 0;

   for(int i = 0; i <  n; i++)
   {
      cin >> x[i];

      sum += x[i];
   }

   int avg = sum / n;

   int ans = 0, store = INT_MAX;

   for(int j = 1; j < avg + 5; j++)
   {
        ans = 0;
        for(int i = 0; i < n; i++)
        {
            int p = abs(x[i]-j);
            ans += p * p;
        }
       // cout << ans << endl;

      store = min(store, ans);
   }

   //cout << ans << " " << ans1 << endl;

   cout << store << endl;

    return 0;
}
