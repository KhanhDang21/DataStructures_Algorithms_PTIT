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
		string s;
		cin >> s;
		int dp[255] = {};
		int MAX = 0;
		for(int i = 0; i < s.size(); i++)
		{
			dp[s[i]]++;
			MAX = max(MAX, dp[s[i]]);
		}
		if(MAX <= s.size() - MAX + 1)
			cout << "1";
		else
			cout << "-1";
		cout << endl;
	}
	return 0;
}