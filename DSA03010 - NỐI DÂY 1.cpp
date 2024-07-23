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
		priority_queue<int, vector<int>, greater<int>> pq;
		while(n--)
		{
			int x;
			cin >> x;
			pq.push(x);
		}
		long long ans = 0;
		while(pq.size() >= 2)
		{
			int x = pq.top();
			pq.pop();
			int y = pq.top();
			pq.pop();
			ans += x + y;
			pq.push(x + y);
		}
		cout << ans << endl;
	}
}