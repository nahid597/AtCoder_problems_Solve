#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s1,s2,s3;

    cin >> s1 >> s2;
    s3 = s1+s2;


   int b = atoi(s3.c_str());

   int p = sqrt(b);
   if(p * p == b)
        printf("Yes\n");

    else
        printf("No\n");

    return 0;
}


