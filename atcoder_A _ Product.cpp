
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, pro;

    while(scanf("%d%d",&a,&b) == 2)
    {
        pro = a * b;
        if(pro % 2 == 0)
        {
            printf("Even\n");
        }

        else
            printf("Odd\n");
    }

    return 0;
}
