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

int t, n;
string s;

int main() {
    ios::sync_with_stdio(false);

    freopen("leapfrog_ch_.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        cin >> s;

        int l = sz(s);
        int tempty = 0, tb = 0;

        for (int j = 0; j < l; ++j) {
            if (s[j] == '.') ++tempty;
            else if (s[j] == 'B') ++tb;
        }

        bool ans = (tb > 0 && tempty > 0 && tb >= tempty);

        cout << "Case #" << i << ": " << (ans ? "Y\n" : "N\n");
    }
}
