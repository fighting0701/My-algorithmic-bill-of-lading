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

int n,m;

void solve()
{
    cin >> n >> m;
    int sum = 0;
    for(int i = 1;i <= n;i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    if(sum == m) cout << "YES" << endl;
    else cout << "NO" << endl;
	return;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}