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
	vector<int> st;
	int x = 205;
	while(x--)
	{
		string s;
		cin >> s;
		if(s == "push")
		{
			int n;
			cin >> n;
			st.push_back(n);
		}
		if(s == "pop")
			st.pop_back();
		if(s == "show")
		{
			if(st.size() == 0)
			{
				cout << "empty";
				break;
			}
			else
			{
				for(int i = 0; i < st.size(); i++)
					cout << st[i] << ' ';
				cout << endl;
			}
		}
	}
	return 0;
}