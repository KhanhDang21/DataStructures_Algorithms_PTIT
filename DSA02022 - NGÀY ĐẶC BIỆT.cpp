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
string s(8, '0');
vector<string> res;
void solve() 
{
    int d = stoi(s.substr(0, 2));
    int m = stoi(s.substr(2, 2));
    int y = stoi(s.substr(4));
    if(d > 0 && d <= 31 && m > 0 && m <= 12 && y >= 2000) 
	{
        string tmp = s;
        tmp.insert(2, 1, '/');
        tmp.insert(5, 1, '/');
        res.push_back(tmp);
    }
}
void Try(int i) 
{
    for(int j = 0; j <= 1; ++j) 
	{
        if(j == 0) 
			s[i] = '0';
        else 
			s[i] = '2';
        if(i == 7) 
			solve();
        else 
			Try(i + 1);
    }
}
int main() 
{
	Try(0);
	sort(res.begin(), res.end());
	for(string x : res)
		cout << x << endl;
    return 0;
}