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
        int n;
        cin >> n;
        vector<int> a, b;
        for(int i = 1; i <=n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        b = a;
        sort(b.begin(), b.end());
        int l = 0, r = n - 1;
        while(a[l] == b[l])
            l++;
        while(a[r] == b[r])
            r--;
        cout << l + 1 << " " << r + 1;
        cout << endl;
    }
}