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
		cin >> s;
		vector<string> v;
		queue<string> q;
		q.push("1");
		while(1)	
		{
			string tmp = q.front();
			q.pop();
			if(stoll(tmp) <= stoll(s))
				v.push_back(tmp);
			else
				break;
			q.push(tmp + "0");
			q.push(tmp + "1");
		}
		cout << v.size() << endl;
	}
	return 0;
}