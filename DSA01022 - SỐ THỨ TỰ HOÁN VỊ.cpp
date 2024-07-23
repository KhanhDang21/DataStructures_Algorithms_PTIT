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
int n, res;
int a[15], b[15], u[15];
bool stop;
void solve()
{
    res++;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != b[i])
            return;
    }
    stop = true;
}
void Try(int i)
{
    if(stop) 
        return;
    for(int j = 1; j <= n; j++)
    {
        if(!u[j])
        {
            a[i] = j;
            u[j] = 1;
            if(i == n)
                solve();
            else
                Try(i + 1);
            u[j] = 0;
        }
    }
}
void Test()
{
    res = 0;
    stop = false;
    memset(u, 0, sizeof(u));
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> b[i];
    Try(1);
    cout << res;
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