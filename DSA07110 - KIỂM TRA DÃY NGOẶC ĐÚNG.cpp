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
int Check(string s)
{
	stack<char> st;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == '(' || s[i] == '[' || s[i] == '{')
			st.push(s[i]);
		else
		{
			if(s[i] == ')')
			{
				if(!st.empty() && st.top() == '(')
					st.pop();
			}
			if(s[i] == ']')
			{
				if(!st.empty() && st.top() == '[')
					st.pop();
			}
			if(s[i] == '}')
			{
				if(!st.empty() && st.top() == '{')
					st.pop();
			}
		}
	}
	if(!st.empty())
		return 1;
	return 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		if(Check(s) == 1)
			cout << "NO";
		else
			cout << "YES";
		cout << endl;
	}
	return 0;
}