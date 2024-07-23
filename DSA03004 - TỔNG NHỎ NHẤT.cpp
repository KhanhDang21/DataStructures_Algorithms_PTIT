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
		int n;
		cin >> n;
		int a[n + 5];
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a, a + n + 1);
		long long x = 0, y = 0;
		for(int i = 1; i <= n; i++)
		{	
			if(i % 2 == 0)
				x = x * 10 + a[i];
			else
				y = y * 10 + a[i];
		}
		cout << x + y << endl;
	}
	return 0;
}