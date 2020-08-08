/**
  * Author     : Jubayer Abdullah Joy
  *              CSE, 5th Batch, University of Barishal
  * Mail       : jubayerjoy98@gmail.com
  * Codeforces : Joy
  * Github     : github.com/JubayerJoy
  * Problem    : 
  *
  */

#pragma GCC optimize("Ofast", "omit-frame-pointer", "inline", "unroll-loops", "fast-math", "no-stack-protector")
#pragma GCC option("arch=native", "tune=native", "no-zero-upper") //Enable AVX
#pragma GCC target("sse", "sse2", "sse3", "sse4", "popcnt", "abm", "mmx", "avx")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;

#ifdef Joy
#define io
#define D(args...)                                                    \
  do                                                                  \
  {                                                                   \
    cerr << "DEBUG > Line : " << __LINE__ << " > " << #args << " : "; \
    dbg(args);                                                        \
  } while (0)
#else
#define io                          \
  ios_base::sync_with_stdio(false); \
  cin.tie(nullptr);                 \
  cout.tie(nullptr);
#define D(args...)
#endif
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define mp make_pair
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a) * ((b) / gcd(a, b))
#define f(i, n) for (ll i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
#define Sort(v) sort(all(v))
#define rev(v) reverse(all(v))
#define bitcount __builtin_popcountll
#define YES outln("YES")
#define NO outln("NO")
#define spc " "
#define el "\n"
#define die return 0
/***  Careful, under construction ***/
#define _T template <typename T, typename... Types>
#define _Tos template <typename T> \
ostream &operator
#define _Tfs template <typename F, typename S> \
ostream &operator

auto sum()
{
  return 0;
}
_T auto sum(T a, Types... b) { return (a) + sum(b...); }
auto product() { return 1; }
_T auto product(T a, Types... b) { return (a)*product(b...); }
void in() { return; }
_T void in(T &a, Types &... b)
{
  cin >> (a);
  in(b...);
}
void out() { return; }
_T void out(T a, Types... b)
{
  cout << (a);
  out(b...);
}
void outln()
{
  cout << el;
  return;
}
_T void outln(T a, Types... b)
{
  cout << (a);
  outln(b...);
}
void dbg() { cerr << el; }
_T void dbg(T a, Types... b)
{
  cerr << (a) << ' ';
  dbg(b...);
}

_Tos << (ostream & os, vector<T> &v)
{
  for (auto i : v)
    os << (i) << spc;
  return os << el;
}
_Tos << (ostream & os, set<T> &v)
{
  for (auto i : v)
    os << (i) << spc;
  return os << el;
}
_Tos << (ostream & os, multiset<T> &v)
{
  for (auto i : v)
    os << (i) << spc;
  return os << "\n";
}
_Tos << (ostream & os, unordered_set<T> &v)
{
  for (auto i : v)
    os << (i) << spc;
  return os << "\n";
}
_Tos << (ostream & os, stack<T> &v)
{
  while (!v.empty())
  {
    os << (v.top()) << spc;
    v.pop();
  }
  return os << el;
}
_Tos << (ostream & os, priority_queue<T> &v)
{
  while (!v.empty())
  {
    os << (v.top()) << spc;
    v.pop();
  }
  return os << el;
}
_Tos << (ostream & os, queue<T> &v)
{
  while (!v.empty())
  {
    os << (v.front()) << spc;
    v.pop();
  }
  return os << el;
}
_Tfs << (ostream & os, pair<F, S> &p) { return os << "\n(" << (p.first) << ", " << (p.second) << ")"; }
_Tfs << (ostream & os, map<F, S> &v)
{
  for (auto i : v)
    os << el << (i.first) << " = " << (i.second);
  return os << el;
}
_Tfs << (ostream & os, multimap<F, S> &v)
{
  for (auto i : v)
    os << el << (i.first) << " = " << (i.second);
  return os << el;
}
_Tfs << (ostream & os, unordered_map<F, S> &v)
{
  for (auto i : v)
    os << el << (i.first) << " = " << (i.second);
  return os << el;
}

/*** Movement ***/
#define valid(new_x, new_y, row, column) (new_x) >= 0 && (new_x) < (row) && (new_y) >= 0 && (new_y) < (column)
//vi fx={+1,-1,+0,+0};             // Four Direction
//vi fy={+0,+0,+1,-1};             // Four Direction
//vi fx={+0,+0,+1,-1,-1,+1,-1,+1}; // Kings Move - 8 Direction
//vi fy={-1,+1,+0,+0,+1,+1,-1,-1}; // Kings Move - 8 Direction
//vi fx={-2,-2,-1,-1,+1,+1,+2,+2}; // Knights Move
//vi fy={-1,+1,-2,+2,-2,+2,-1,+1}; // Knights Move

//vector<vi> matrix(row, vi (column,value)); //- 2D Vector
//cout << fixed << setprecision(20)<< value <<endl;
//sort(all(a), greater <int>());

int main(int argc, char const *argv[])
{
  io

      return 0;
}
