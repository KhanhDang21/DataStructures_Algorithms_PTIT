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
int cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		pair<int, int> a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i].first;
		for(int i = 0; i < n; i++)
			cin >> a[i].second;
		sort(a, a + n, cmp);
		int cnt = 1;
		int now = a[0].second;
		for(int i = 1; i < n; i++)
		{
			if(now <= a[i].first)
			{
				cnt++;
				now = a[i].second;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}