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
int n, k;
int a[55];
vector<string> b;
vector<vector<string>> res;
void showReady()
{
	vector<string> v;
	for(int i = 1; i <= k; i++)
		v.push_back(b[a[i]]);
	sort(v.begin(), v.end());
	res.push_back(v);
}
void Try(int i)
{
	for(int j = a[i - 1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if(i == k)
			showReady();
		else
			Try(i + 1);
	}
}
int main()
{
	cin >> n >> k;
	map<string, bool> mp;
	for(int i = 1; i <= n; i++)
	{
		string s;
		cin >> s;
		mp[s] = true;
	}
	b.push_back("");
	for(auto x : mp)
		b.push_back(x.first);
	n = b.size() - 1;
	Try(1);
	sort(res.begin(), res.end());
	for(auto x : res)
	{
		for(string y : x)
			cout << y << " ";
		cout << endl;
	}
	return 0;
}