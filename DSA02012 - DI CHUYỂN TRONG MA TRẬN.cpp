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
int m, n;
int a[105][105];
int cnt;
void Try(int i, int j)
{
	if(i == n && j == m)
	{
		cnt++;
		return;
	}
	if(i + 1 <= n)
		Try(i + 1, j);
	if(j + 1 <= m)
		Try(i, j + 1);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cnt = 0;
		cin >> n >> m;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
				cin >> a[i][j];
		}
		Try(1, 1);
		cout << cnt << endl;
	}
	return 0;
}