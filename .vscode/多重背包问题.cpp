#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi >
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define endl  '\n'
#define fin for(int i = 1;i <= n;i++)

int n,m;
int v[105],w[105],s[105];
int f[105];

void solve()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) cin >> v[i] >> w[i] >> s[i];
    for(int i = 1;i <= n;i++)
        for(int j = m;j >= 0;j--)
            for(int k = 1;k <= s[i] && k * v[i] <= j;k++)
                f[j] = max(f[j], f[j - k * v[i]] + k * w[i]);
    cout << f[m] << endl;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
    int t = 1;
	while(t--) solve();
	return 0;
}