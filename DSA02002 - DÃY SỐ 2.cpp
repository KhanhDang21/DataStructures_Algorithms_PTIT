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
int n;
vector<int> a, b;
vector<vector<int>> res;
void Try(int n)
{
	res.push_back(a);
	if(n == 1)
		return;
	for(int i = 0; i < n - 1; i++)
		b.push_back(a[i] + a[i + 1]);
	a = b;
	b.clear();
	Try(n - 1);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		a.resize(n);
		res.clear();
		for(int i = 0; i < n; i++)
			cin >> a[i];
		Try(n);
		reverse(res.begin(), res.end());
		for(auto x : res)
		{
			cout << "[";
			for(int y = 0; y < x.size(); y++)
			{
				cout << x[y];
				if(y != x.size() - 1)
					cout << " ";
			}
			cout << "] ";
		}
		cout << endl;
	}
}