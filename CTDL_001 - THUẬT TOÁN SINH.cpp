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
int n;
string s;	
void Print()
{
	string rs = s;
	reverse(rs.begin(), rs.end());
	if(rs == s)
	{
		for(int i = 0; i < s.size(); i++)
			cout << s[i] << " ";
		cout << endl;
	}
}
void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		s[i] = j + '0';
		if(i == n - 1)
			Print();
		else
			Try(i + 1);
	}
}
int main()
{
	cin >> n;
	s.resize(n);
	Try(0);
	return 0;
}