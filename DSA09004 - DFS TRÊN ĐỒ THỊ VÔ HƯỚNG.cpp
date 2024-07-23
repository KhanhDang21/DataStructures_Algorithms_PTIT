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
int n, m , u;
int visited[1005];
vector<int> a[1005];
void DFS(int u)
{
	visited[u] = 1;
	cout << u << " ";
	for(int v : a[u])
	{
		if(visited[v] == 0)
			DFS(v);
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(visited, 0, sizeof(visited));
		for(int i = 0; i < 1005; i++)
			a[i].clear();
		cin >> n >> m >> u;
		while(m--)
		{
			int x, y;
			cin >> x >> y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		DFS(u);
		cout << endl;
	}
}