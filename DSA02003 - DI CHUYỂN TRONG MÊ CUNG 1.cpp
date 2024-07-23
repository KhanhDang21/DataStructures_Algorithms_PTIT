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
int a[25][25];
vector<string> v;
void Try(int i, int j, string res)
{
	if(i == n - 1 && j == n - 1)
	{
		v.push_back(res);
		return;
	}
	if(a[i + 1][j] == 1 && i < n)
		Try(i + 1, j, res + "D");
	if(a[i][j + 1] == 1 && j < n)	
		Try(i, j + 1, res + "R");
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		v.clear();
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
				cin >> a[i][j];
		}
		if(a[0][0] == 0 || a[n - 1][n - 1] == 0)
			cout << "-1" << endl;
		else
		{
			Try(0, 0, "");
			if(v.empty())
				cout << "-1" << endl;
			else
			{
				sort(v.begin(), v.end());
				for(string x : v)
					cout << x << ' ';
				cout << endl;
			}
		}
	}
	return 0;
}