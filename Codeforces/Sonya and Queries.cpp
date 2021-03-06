#include <bits/stdc++.h>
#define pi acos(-1)
#define sz(x) (int) x.size()
#define pii pair<int, int>
#define pill pair<int, long long>
#define mii map<int, int>
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define vb vector<bool>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define popb pop_back
#define all(v) v.begin(),v.end()
#define mod(x, m) ((x % m) + m) % m
#define mset(v, x) memset(v, x, sizeof(v))
#define mset2d(v, x, n) memset(v, x, sizeof(v[0][0]) * n * n)
#define mset2dd(v, x, n, m) memset(v, x, sizeof(v[0][0]) * n * m)
#define debug(x) cerr<<#x<<" : "<<x<<endl
#define debug2(x,y) cerr<<#x<<" : "<<x<<" & "<<#y<<" : "<<y<<endl
#define test() cerr<<"hola papa"<<endl
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;

int n, v[(1 << 18) + 5];
ll a;

void add(ll x) {
  ll mask = 0;
  ll p = 0;
  while (x) {
    int m = x % 10;
    x /= 10;
    if (m & 1) {
      mask += (1LL << p);
    }
    ++p;
  }
  v[mask]++;
}

void subs(ll x) {
  ll mask = 0;
  ll p = 0;
  while (x) {
    int m = x % 10;
    x /= 10;
    if (m & 1) {
      mask += (1LL << p);
    }
    ++p;
  }
  v[mask]--;
}

int query(ll x) {
  ll value = 0;
  ll p = 0;
  while (x) {
    int m = x % 10;
    x /= 10;
    if (m & 1) {
      value += (1LL << p);
    }
    ++p;
  }
  return v[value];
}

int main() {
  char c;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> c >> a;
    if (c == '+') {
      add(a);
    } else if (c == '-') {
      subs(a);
    } else {
      cout << query(a) << "\n";
    }
  }
}
