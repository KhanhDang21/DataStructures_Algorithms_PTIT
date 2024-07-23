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
		queue<string> q;
		vector<string> v;
		q.push("6");
		q.push("8");
		for(int i = 1; i <= 100005; i++)
		{
			string tmp = q.front();
			q.pop();
			v.push_back(tmp);
			q.push(tmp + "6");
			q.push(tmp + "8");
		}
		reverse(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++)
		{
			if(v[i].size() <= n)
				cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}