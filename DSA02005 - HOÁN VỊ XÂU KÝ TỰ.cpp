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
string a, b;
vector<bool> visited;
void Try(int i)
{
	for(int j = 0; j < a.size(); j++)
	{
		if(!visited[j])
		{
			visited[j] = 1;
			b[i] = a[j];
			if(i == a.size() - 1)
				cout << b << ' ';
			else
				Try(i + 1);
			visited[j] = 0;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> a;
		int n = a.size();
		b.resize(n);
		visited.resize(n, 0);
		Try(0);
		cout << endl;
	}
}