#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
int n, m, u;
vector<int> v[1005];
int visited[1005];
void DFS(int u)
{
    cout << u << " ";
    visited[u] = 1;
    for(int x : v[u])
    {
        if(visited[x] == 0)
            DFS(x);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= 1005; i++)
            v[i].clear();
        cin >> n >> m >> u;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        DFS(u);
        cout << endl;
    }
    return 0;
}