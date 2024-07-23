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
int mark[100005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(mark, 0, sizeof(mark));
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mark[a[i]]++;
        }
        sort(a, a + n);
        int l = a[0], r = a[n - 1];
        int cnt = 0;
        for(int i = l; i <= r; i++)
        {
            if(mark[i] == 0)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}