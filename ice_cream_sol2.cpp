#include <bits/stdc++.h>
using namespace std; 

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll comb(ll x) {
    return (x * (x - 1)) / 2;
}

ll solve(ll m) {
    ll n = (1 + sqrt(1 + 8 * m)) / 2;

    return n + (m - comb(n));
}

int main(){ _
    int t; cin >> t;
    while(t--) {
        ll m; cin >> m;

        cout << solve(m) << endl;
    }

    return 0;
}