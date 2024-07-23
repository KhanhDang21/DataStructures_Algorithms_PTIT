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
vector<int> V[1005];
int vs[1005];
void BFS(int u)
{   
    queue<int> q;
    cout << u << " ";
    vs[u] = 1;
    q.push(u);
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        for(int x : V[t])
        {
            if(vs[x] == 0)
            {
                cout << x << " ";
                q.push(x);
                vs[x] = 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(vs, 0, sizeof(vs));
        for(int i = 1; i <= 1005; i++)
            V[i].clear();
        cin >> n >> m >> u;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            V[x].push_back(y);
        }
        BFS(u);
        cout << endl;
    }
    return 0;
}