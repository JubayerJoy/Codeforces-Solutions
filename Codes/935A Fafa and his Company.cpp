/**
  * Author     : Jubayer Abdullah Joy
  *              CSE, 5th Batch, University of Barishal
  * Mail       : jubayerjoy98@gmail.com
  * Codeforces : Joy
  * Github     : github.com/JubayerJoy
  * Problem    : 
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
