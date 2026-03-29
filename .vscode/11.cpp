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

double a[100005];
int n,u;

double fd(int l,double x)
{
    int r = n;
    int mid = (l + r + 1) / 2;
    while(l < r)
    {
        mid = (l + r + 1 )/ 2;
        if(a[mid] > x) r = mid - 1;
        else l = mid;
    }
    return a[l];
}

void solve()
{
    cin >> n >> u;
    fin cin >> a[i];
    double ans = -1;
    for(int i = 1;i <= n - 2;i++)
    {
        double x = fd(i + 2,a[i] + u);
        if(x - a[i] > u) continue;
        ans = max(ans,(x - a[i + 1])/(x - a[i]));
    }
    printf("%.10f",ans);
    cout << endl;
	return;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int t = 1;
	while(t--) solve();
	return 0;
}