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
char c;
int k;
string s;
void Try(char i)
{
	for(int j = i; j <= c; j++)
	{
		s.push_back(j);
		if(s.size() == k)
			cout << s << endl;
		else
			Try(j);	
		s.pop_back();
	}
}
int main()
{
	cin >> c;
	cin >> k;
	Try('A');
	return 0;
}