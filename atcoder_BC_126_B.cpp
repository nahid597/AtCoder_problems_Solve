
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int y, m , ym = 0 , my = 0 , yy = 0 , mm = 0;
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(i <= 1)
        {
            y = yy * 10 + s[i] - 48;
            yy = y;
            //cout << y << endl;
        }

        else
        {
            m = mm * 10 + s[i] - 48;
            mm = m;

        }

    }

    //cout << y << m << endl;

    if(y >= 0 && m >= 1 && m <= 12 )
    {
        ym = 1;
    }

    if(y >= 1 && y <= 12 && m >= 0)
    {
        my = 1;
    }

    if(ym && !my )
       cout << "YYMM"<< endl;
    else if(!ym && my)
    {
         cout << "MMYY"<< endl;
    }

    else if(my && ym)
    {
        cout << "AMBIGUOUS" << endl;
    }

    else
       cout << "NA" << endl;



    return 0;
}
