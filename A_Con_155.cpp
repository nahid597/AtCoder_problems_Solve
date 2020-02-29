#include<bits/stdc++.h>

using namespace std;

int main()
{

   int a, b, c;

   cin >> a >> b >> c;

   int cnt = 0;

   if(a == b)
     cnt++;
    if(b == c )
       cnt++;
    if(a == c)
      cnt++;

      if(cnt >= 1 && cnt < 3)
        cout << "Yes" << endl;
      else
         cout << "No" << endl;

    return 0;
}

