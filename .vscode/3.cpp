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

int n;
int fdd = 1;
int a[100005];
int q[100005];
bool st[100005];

void solve()
{
    fdd = 1;
    memset(st,0,sizeof st);
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i];
    for(int i = 1;i <= n;i++)
    {
        if(a[i] != a[i - 1]) q[i] = a[i];
        else
        {
            bool fd = false;
            for(int j = fdd;j < a[i];j++)
            {
                if(!st[j])
                {
                    q[i] = j;
                    fdd = j;
                    fd = true;
                    break;
                }
            }
            if(!fd)
            {
                cout << -1 << endl;
                return;
            }
        }
        if(fdd == q[i]) fdd++;
        st[q[i]] = true;
    }
    for(int i = 1;i <= n;i++) cout << q[i] << " ";
    cout << endl;
	return;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int t; cin >> t;
	while(t--) solve();
	return 0;
}