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
#define fim for(int i = 1;i <= m;i++)
#define INF 0x3f3f3f3f3f3f3f3f

int n,m;
bool vis[505];
int dist[505];
int q[505][505];

int findmin()
{
    int mn = INF;
    int mni = -1;
    for(int i = 1;i <= n;i++)
    {
        if(vis[i]) continue;
        if(mn > dist[i])
        {
            mn = dist[i];
            mni = i;
        }
    }
    return mni;
}

int dijkstra()
{
    dist[1] = 0;
    vis[1] = true;
    for(int i = 1;i <= n;i++)
    {
        int u = 0;
        if(i == 1) u = 1;
        else u = findmin();
        if(u == -1) break;
        vis[u] = true;
        for(int j = 1;j <= n;j++)
        {
            if(u == j) continue;
            if(vis[j]) continue;
            if(q[u][j] == -1) continue;
            dist[j] = min(dist[u] + q[u][j],dist[j]);
        }
    }
    if(dist[n] == INF) return -1;
    else return dist[n];
}

void solve()
{
    memset(q, -1 ,sizeof(q));
    memset(dist, 0x3f, sizeof(dist));
    memset(vis, 0, sizeof vis);
    cin >> n >> m;
    for(int i = 1;i <= m;i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        if(q[u][v] == -1) q[u][v] = w;
        else q[u][v] = min(w,q[u][v]);
    }
    cout << dijkstra() << endl;
	return;
}

signed main()
{
	ios::sync_with_stdio(false),cin.tie(nullptr);
    solve();
	return 0;
}