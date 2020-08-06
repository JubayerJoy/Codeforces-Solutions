/**
  * Author     : Jubayer Abdullah Joy
  *              CSE, 5th Batch, University of Barishal
  * Mail       : joy.cse5.bu@gmail.com or jubayerjoy98@gmail.com
  * Codeforces : Joy
  * Problem    : 935A Fafa and his Company
  * Time       : 2020-08-06-23.06.32 Thursday
  *
  */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, i, c = 0;
    cin >> a;

    if (a == 2)
        c = 1;
    else
    {
        for (i = 2; i <= a; i++)
        {
            if (a % i == 0)
                c++;
        }
    }
    cout << c << endl;

    return 0;
}
