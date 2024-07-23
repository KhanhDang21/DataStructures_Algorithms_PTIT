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
int n, k;
vector<int> a;
void solve()
{
    string s;
    for(int i = 1; i <= k; i++)
        s.push_back(a[i] + 'A' - 1);
    cout << s << endl;
}
void Try(int i) 
{
    for(int j = a[i - 1] + 1; j <= n - k + i; j++) 
    {
        a[i] = j;
        if(i == k) 
            solve();
        else    
            Try(i + 1);
    }
}
void Test() 
{
    cin >> n >> k;
    a.resize(k + 1, 0);
    Try(1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        Test();
        cout << endl;
    }
    return 0;
}