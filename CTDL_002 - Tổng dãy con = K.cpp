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
int cnt = 0;
void show()
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += a[i] * b[i];
	if(sum == k)
	{
		cnt++;
		for(int i = 0; i < n; i++)
		{
			if(b[i])
				cout << a[i] << " ";
		}
		cout << endl;
	}
}
void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		b[i] = j;
		if(i == n - 1)
			show();
		else
			Try(i + 1);
	}
}
int main()
{
	cin >> n >> k;
	a.resize(n);
	b.resize(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	Try(0);
	cout << cnt;
}