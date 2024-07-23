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
vector<int> a, b, v;
vector<vector<int>> res;
void Try(int i)
{
    for(int j = 0; j < n; j++)
    {
        if(!v[j])
        {
            b[i] = a[j];
            v[j] = 1;
            if(i == n - 1)
                res.push_back(b);
            else
                Try(i + 1);
            v[j] = 0;
        }
    }
}
void Test()
{
    cin >> n;
    a.resize(n);
    b.resize(n);
    v.resize(n, 0);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    Try(0);
    sort(res.begin(), res.end());
    for(auto i : res) 
    {
        for(int j : i)
            cout << j << " ";
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Test();
    return 0;
}