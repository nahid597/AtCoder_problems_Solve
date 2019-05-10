
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int x[n+2], mx = 0, a[n+2];

    for(int i = 1; i <= n; i++)
    {
        cin >> x[i];
       //i9 mx = max(mx,x[i]);
    }

    int j = 1;
   /* for(int i = 1; i <= n; i++)
    {
        if(j <= i)
        {
            a[j] = j;
            j++;
        }
    }*/

    sort(x+1, x+n+1);

    int c = 0, y[n+1];

     for(int i = 1; i <= n; i++)
    {
     // cout << x[i] << " " << i << endl;
        if(x[i] > i)
        {
           c = 1;

        }
    }



    if(c)
    {
        cout << "-1" << endl;
    }

    else {

        for(int i = 1; i <= n; i++)
        {
            cout << x[i]<< endl;
           //i9 mx = max(mx,x[i]);
        }
    }


    return 0;
}
