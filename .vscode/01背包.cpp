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

int N,V;
int v[1005],w[1005];
int f[1005];

void solve()
{
    cin >> N >> V;
    for(int i = 1;i <= N;i++) cin >> v[i] >> w[i];
    for(int i = 1;i <= N;i++)
        for(int j = V;j >= v[i];j--)
            f[j] = max(f[j],f[j - v[i]] + w[i]);
    cout << f[V] << endl;
	return;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
    int t = 1;
	while(t--) solve();
	return 0;
}