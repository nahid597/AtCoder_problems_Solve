
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, sum ,cont = 0;

    cin >> a >> b >> c;

    sum = a;
    for(int i = 0; i < c; i++)
    {
        if(sum <= b){
            cont++;
            sum += a;
        }
    }

    cout << cont << endl;


    return 0;
}
