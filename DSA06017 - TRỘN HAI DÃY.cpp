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
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> res;
        int a[n], b[m];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            res.push_back(a[i]);
        }    
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            res.push_back(b[i]);
        }
        sort(res.begin(), res.end());
        for(auto x : res)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}