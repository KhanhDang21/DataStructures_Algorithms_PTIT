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
int n, x;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(abs(x - a.first) == abs(x - b.first))
        return a.second < b.second;
    return abs(x - a.first) < abs(x - b.first);
}
int main()
{	
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        vector<pair<int, int>> v;
        v.resize(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end(), cmp);
        for(auto x : v)
            cout << x.first << " ";
        cout << endl;
    }
    return 0;
}