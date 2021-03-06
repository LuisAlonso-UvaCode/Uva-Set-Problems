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

const int MAX = 5000;

int n, total = 0;
vector< pii > v(MAX + 5);
vi acum(MAX + 5, 0);
vi ans;

bool intersection(pii p1, pii p2) {
    return (p1.se > p2.fi and p1.fi < p2.se);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i].fi >> v[i].se;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (intersection(v[i], v[j])) {
                ++acum[i], ++acum[j];
                ++total;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (acum[i] == total) {
            ans.pb(i + 1);
        }
    }
    cout << sz(ans) << "\n";
    for (int i = 0; i < sz(ans); ++i) {
        cout << ans[i] << ((i + 1 < sz(ans)) ? " " : "\n");
    }
}