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

void solve()
{
	int n;
	cin >> n;
	vector<int>q1(n + 1);
	vector<int>q2(n + 1);
	fin cin >> q1[i];
	fin cin >> q2[i];
	int l = 1,r = n;
	fin
	{
		if(q1[i] != q2[i])
		{
			l = i;
			break;
		}
	}
	for(int i = n;i >= 1;i --)
	{
		if(q1[i] != q2[i])
		{
			r = i;
			break;
		}
	}
	for(int i = l;i >= 2;i--)
	{
		if(q2[i] >= q2[i - 1]) l--;
		else break;
	}
	for(int i = r;i <= n - 1;i++)
	{
		if(q2[i] <= q2[i + 1]) r++;
		else break;
	}
	cout << l << " " << r << endl;
	return;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}