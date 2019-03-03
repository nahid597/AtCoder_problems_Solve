
#include<bits/stdc++.h>

using namespace std;


int main()
{

    int a , b , k , x[101];

    cin >> a >> b >> k;

    int m = max(a , b);
    int j = 0;

    for(int i = 1 ; i <= m ; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            x[j++] = i;
        }
    }

    sort(x , x + j);

    cout << x[ j - k] << endl;

    //for(int i = 0; i < j; i++)
    //{
     //   cout << x[i] << " ";
   // }



    return 0;
}
