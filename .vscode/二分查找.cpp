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
int a[1000005];

int bs(int x)
{
    int l = 1,r = n;
    int mid = (l + r) / 2;
    while(l < r)
    {
        mid = (l + r) / 2;
        if(a[mid] >= x) r = mid;
        else l = mid + 1; 
    }
    if(a[l] == x) return l;
    else return -1;
}

void solve()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++) cin >> a[i];
    for(int i = 1;i <= m;i++)
    {
        int x;
        cin >> x;
        cout << bs(x) << " ";
    }
	return;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
    solve();
	return 0;
}