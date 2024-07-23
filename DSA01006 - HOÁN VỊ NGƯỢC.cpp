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
int a[25], check[25] = {0};
void in()
{
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout << ' ';
}
void Try(int u)
{
    for(int i = n; i >= 1; i--)
    {
        if(check[i] == 0)
        {
            check[i] = 1;
            a[u] = i;
            if(u == n)
                in();
            else    
                Try(u + 1);
            check[i] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}