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
int a[105][105];
int d[105][105];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

int bfs()
{
    queue<pair<int,int>>q;
    
    memset(d,-1,sizeof d);
    d[1][1] = 0;
    q.push({1,1});
    while(q.size())
    {
        auto t = q.front();
        q.pop();
        for(int i = 0;i < 4;i++)
        {
            int x = t.first + dx[i];
            int y = t.second + dy[i];
            if(x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 0 && d[x][y] == -1)
            {
                d[x][y] = d[t.first][t.second] + 1;
                q.push({x,y});
            }
        }
    }
    return d[n][m];
}

void solve()
{
	cin >> n >> m;
    for(int i = 1;i <= n;i++)
        for(int j = 1;j <= m;j++)
            cin >> a[i][j];
    cout << bfs() << endl;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
	solve();
	return 0;
}