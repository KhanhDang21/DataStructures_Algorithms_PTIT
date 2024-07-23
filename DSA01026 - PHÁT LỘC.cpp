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
vector<string> res;
void solve()
{
    if(s.front() == '8' && s.back() == '6' && s.find("88") == -1 && s.find("6666") == -1)
        res.push_back(s);
}
void Try(int i) 
{
    for(int j = 0; j <= 1; ++j) 
    {
        if(j == 0) 
            s[i] = '6';
        else 
            s[i] = '8';
        if(i == n - 1) 
            solve();
        else 
            Try(i + 1);
    }
}
void Test() 
{
    cin >> n;
    s.resize(n);
    Try(0);
    sort(res.begin(), res.end());
    for(string i : res)
        cout << i << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Test();
    return 0;
}