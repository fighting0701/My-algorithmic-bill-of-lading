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

string s = "codeforces";

void solve()
{
	string ss;
	cin >> ss;
	int ans = 0;
	for(int i = 0;i < s.size();i++) if(s[i] != ss[i]) ans++;
	cout << ans << endl;
	return;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}