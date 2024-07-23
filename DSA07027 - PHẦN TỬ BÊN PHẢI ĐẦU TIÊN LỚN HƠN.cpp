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
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int res[n];
		stack<int> st;
		for(int i = n - 1; i >= 0; i--)
		{
			while(!st.empty() && a[i] >= st.top())
				st.pop();
			if(st.empty())
				res[i] = -1;
			else
				res[i] = st.top();
			st.push(a[i]);
		}
		for(int i = 0; i < n; i++)
			cout << res[i] << ' ';
		cout << endl;
	}
	return 0;
}