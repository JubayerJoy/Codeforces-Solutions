/**
  * Author     : Jubayer Abdullah Joy
  *              CSE, 5th Batch, University of Barishal
  * Mail       : joy.cse5.bu@gmail.com or jubayerjoy98@gmail.com
  * Codeforces : Joy
  * Problem    : 938A Word Correction
  * Time       : 2020-08-06-21.06.39 Thursday
  *
  */

#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char x)
{
    string vowel = "aeiouy";
    for (auto i : vowel)
        if (x == i)
            return true;
    return false;
}

int main(int argc, char const *argv[])
{
    // Basically, in this problem you have keep deleting "vowels" if the previous char is "vowel"
    int n;
    string a;
    cin >> n >> a;

    // Pro tip: Always read what the Bold texts carefully
    // It was my first AC and as a beginner but I knew about the pro tip and didn't get busted by that 'y'

    string ans;
    for (auto i : a)
    {
        if (is_vowel(i) && is_vowel(ans.back()))
            continue;
        ans += i;
    }
    cout << ans;

    return 0;
}
