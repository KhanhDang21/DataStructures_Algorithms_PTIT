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
int count(int x, int y[], int n, int a[])
{
    if(x == 0)
        return 0;
    if(x == 1)
        return a[0];
    int it = upper_bound(y, y + n, x) - y;
    int ans = n - it;
    ans += (a[0] + a[1]);
    if(x == 2)
        ans -= (a[3] + a[4]);
    if(x == 3)
        ans += a[2];
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {   
        int n, m;
        cin >> n >> m;
        int x[n], y[m], a[5] = {}, ans = 0;
        for(int i = 0; i < n; i++)
            cin >> x[i];
        for(int i = 0; i < m; i++)  
            cin >> y[i];
        for(int i = 0; i < n; i++)
        {
            if(y[i] < 5)
                a[y[i]]++;
        }
        sort(y, y + n);
        for(int i = 0; i < m; i++) 
            ans += count(x[i], y, n, a);
        cout << ans << endl;
    }
    return 0;
}