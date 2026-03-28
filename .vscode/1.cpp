#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi >
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define endl  '\n'
#define fin for(int i = 1;i <= n;i++)

int n,c,d;
int a[200005];
int q[200005];

bool mch(int x)
{
    int res = 0;
    if(x > n)
    {
        int ct = d / x;
        int ctt = d % x;
        res += ct * q[n];
        if(ctt > n) res += q[n];
        else res += q[ctt];
    }
    else
    {
        int ct = d / x;
        int ctt = d % x;
        res += ct * q[x];
        res += q[ctt];
    }
    if(res >= c) return true;
    else return false;
}

int bf()
{
    int l = 1,r = d - 1;
    int mid = (l + r + 1) / 2;
    while(l < r)
    {
        mid = (l + r + 1) / 2;
        if(mch(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}

void solve()
{
    memset(a,-1,sizeof a);
    memset(q, 0,sizeof q);
    cin >> n >> c >> d;
    for(int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + n + 1,greater<int>());
    for(int i = 1;i <= n;i++) q[i] = q[i - 1] + a[i];
    int ans = 0;
    for(int i = 1;i <= d && i <= n;i++) ans += a[i];
    if(ans >= c) cout << "Infinity" << endl;
    else if(a[1] * d < c) cout << "Impossible" << endl;
    else cout << bf() - 1 << endl;
	return;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}