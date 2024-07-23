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
int n, m, ans, parent[100005], num[100005];
void init()
{
    for(int i = 1; i <= n; i++)
    {
        parent[i] = i;
        num[i] = 1;
    }
}
int Find(int u)
{
    if(u != parent[u])
        parent[u] = Find(parent[u]);
    return parent[u];
}
void Union(int u, int v)
{
    int a = Find(u), b = Find(v);
    if(a == b)
        return;
    if(num[a] < num[b])
        swap(a, b);
    parent[b] = a;
    num[a] += num[b];
    ans = max(ans, num[a]);
}
int main()
{
    int t, u, v;
    cin >> t;
    while(t--)
    {
        ans = 0;
        cin >> n >> m;
        init();
        while(m--)
        {
            cin >> u >> v;
            Union(u, v);
        }
        cout << ans << endl;
    }
}