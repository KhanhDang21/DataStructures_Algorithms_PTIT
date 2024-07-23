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
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.size(), m = s2.size();
		int f[n + 1][m + 1];
		for(int i = 0; i <= n; i++)
		{
			for(int j = 0; j <= m; j++)
			{
				if(i == 0 || j == 0)
					f[i][j] = 0;
				else
				{
					if(s1[i - 1] == s2[j - 1])
						f[i][j] = f[i - 1][j - 1] + 1;
					else
						f[i][j] = max(f[i - 1][j], f[i][j - 1]);
				}
			}
		}
		cout << f[n][m] << endl;
	}
	return 0;
}