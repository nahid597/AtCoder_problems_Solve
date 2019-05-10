#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a, b , mx = 0, st, sum = 0;

    cin >> a >> b;

    if(a > b)
    {
        mx = a;
        st = a;
    }

    else
    {
        mx = b;
        st = b;
    }

    sum += mx;

    if(a == st)
    {
        a--;
    }

    else
       b--;

    if(a > b)
    {
        mx = a;
        st = a;
    }

    else
    {
        mx = b;
        st = b;
    }

    sum += mx;


    cout << sum << endl;




    return 0;
}
