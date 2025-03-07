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
		int n, s;
		cin >> n >> s;
		int a[n];
		vector<int> dp(s + 5, 0);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		dp[0] = 1;
		for(int i = 0; i < n; i++)
		{
			for(int j = s; j >= a[i]; j--)
			{
				if(dp[j - a[i]] == 1)
					dp[j] = 1;
			}
		}
		if(dp[s] == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}