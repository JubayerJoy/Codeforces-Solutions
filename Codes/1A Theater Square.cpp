/**
  * Author     : Jubayer Abdullah Joy
  *              CSE, 5th Batch, University of Barishal
  * Mail       : jubayerjoy98@gmail.com
  * Codeforces : Joy
  * Github     : github.com/JubayerJoy
  * Problem    : Theater Square
  *
  */

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int m, n, a;
  cin >> m >> n >> a;
  long long ans = ceil(m * 1.0 / a) * ceil(n * 1.0 / a);
  cout << ans;

  return 0;
}