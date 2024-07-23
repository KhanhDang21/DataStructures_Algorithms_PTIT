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
vector<int> a, b;
vector<vector<int>> res;
bool check;
void showReady()
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += a[i] * b[i];
	if(sum == k)
	{
		check = true;
		vector<int> v;
		for(int i = 0; i < n; i++)
		{
			if(b[i])
			{
				v.push_back(a[i]);
			}
		}
		res.push_back(v);
	}
}
void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		b[i] = j;
		if(i == n - 1)
			showReady();
		else
			Try(i + 1);
	}
}		
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		a.resize(n);
		b.resize(n);
		res.clear();
		check = false;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		Try(0);
		if(!check)
			cout << "-1";
		else
		{
			sort(res.begin(), res.end());
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
		}
		cout << endl;
	}
	return 0;
}