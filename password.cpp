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

int main(){ _

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        vector<int> proibidos(n);
        for (int i = 0; i < n; i++) cin >> proibidos[i];

        int v = 10 - n;
        
        cout << 3 * v * (v - 1) << endl;
    }

    return 0;
}