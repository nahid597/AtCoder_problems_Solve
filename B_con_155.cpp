
#include<bits/stdc++.h>

using namespace std;

int main()
{

   int n;

   cin >> n;

   int *arr = (int*) malloc(n + 5 * sizeof(int*));

   for(int i = 0; i < n; i++)
   {
     cin >> arr[i];
   }

   int check = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] % 3 != 0 && arr[i] % 5 != 0)
        {
            puts("DENIED");
            return 0;
        }
    }

 puts("APPROVED");



    return 0;
}

