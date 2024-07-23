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
vector<int> a, b;
void solve()
{
    for(int i = 1; i <= k; i++)
        cout << a[b[i]] << ' ';
    cout << endl;
}
void Try(int i)
{
    for(int j = b[i - 1] + 1; j <= n - k + i; j++)
    {
        b[i] = j;
        if(i == k)
            solve();
        else
            Try(i + 1);
    }
}
void Test()
{
    cin >> n >> k;
    set<int> s;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    a.push_back(-1);
    for(auto i : s)
        a.push_back(i);
    n = s.size();
    b.resize(n + 5);
    for(int i = 0; i <= n; i++)
        b[i] = i;
    Try(1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Test();
    return 0;
}