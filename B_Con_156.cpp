#include<iostream>

using namespace std;

class Digit{
    public: 
          int n, k;

          int digit(int n, int k)
          {
              int d = 0;

              while (n)
              {
                  n /= k;
                  d++;
              }

              return d;
              
          }
};

int main()
{
    Digit obj;

    cin >> obj.n >> obj.k;

    cout << obj.digit(obj.n, obj.k) << endl;

    return 0;
}