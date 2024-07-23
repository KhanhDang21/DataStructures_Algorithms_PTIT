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
vector<int> v[1005  ];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 1; i <= 1005; i++)
            v[i].clear();
        int n, m;
        cin >> n >> m;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        for(int i = 1; i <= n; i++)
        {
            cout << i << ": ";
            for(int j = 0; j < v[i].size(); j++)
                cout << v[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}