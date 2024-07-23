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
	int c, n;
	cin >> c >> n;
	int w[n + 5];
	for(int i = 1; i <= n; i++)
		cin >> w[i];
	int dp[n + 5][c + 5];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= c; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if(w[i] <= j)
				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + w[i]);
		}
	}
	cout << dp[n][c];
	return 0;
}