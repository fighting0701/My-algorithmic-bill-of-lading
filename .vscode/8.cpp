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

int a[200005];
int n;

int fd(int x)
{
    int l = 1, r = n;
    int mid = (l + r) / 2;
    while(l < r)
    {
        mid = (l + r) / 2;
        if(a[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return l;
}

void solve()
{
    cin >> n;
    int sum = 0;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a + 1,a + n + 1);
    int m;
    cin >> m;
    int ad = sum;
    while(m--)
    {
        ad = sum;
        int x,y;
        cin >> x >> y;
        if(a[1] >= x)
        {
            ad -= a[1];
            if(ad >= y) cout << 0 << endl;
            else cout << y - ad << endl;
            continue;
        }
        else if(a[n] <= x)
        {
            ad -= a[n];
            int ans = x - a[n];
            if(ad >= y) cout << ans << endl;
            else cout << ans + y - ad << endl;
            continue;
        }
        else
        {
            int mn = fd(x);
            int ans1,ans2;
            if(ad - a[mn] >= y) ans1 = 0;
            else ans1 = y - ad + a[mn];
            if(mn == 1) cout << ans1 << endl;
            else
            {
                ans2 = x - a[mn - 1];
                if(ad - a[mn - 1] >= y) ans2 += 0;
                else ans2 += y - ad + a[mn - 1];
                cout << min(ans1,ans2) << endl;
            }
        }
    }
	return;
}

signed main()
{
	int t = 1;
	while(t--) solve();
	return 0;
}