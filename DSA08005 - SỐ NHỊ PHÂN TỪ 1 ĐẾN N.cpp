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
		int n;
		cin >> n;
		queue<string> q;
		q.push("1");
		for(int i = 1; i <= n; i++)
		{
			string tmp = q.front();
			cout << q.front() << " ";
			q.pop();
			q.push(tmp + "0");
			q.push(tmp + "1");
		}
		cout << endl;
	}
}