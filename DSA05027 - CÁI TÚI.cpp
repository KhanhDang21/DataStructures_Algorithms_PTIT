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
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, v;
		cin >> n >> v;
		int a[n], c[n];
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		for(int i = 1; i <= n; i++)
			cin >> c[i];
		int dp[n + 5][v + 5];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= v; j++)
			{
				dp[i][j] = dp[i - 1][j];
				if(j >= a[i])
					dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + c[i]);
			}
		}
		cout << dp[n][v] << endl;
	}
	return 0;
}