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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k + 5];
        map<int, int> mp;
        for(int i = 1; i <= k; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int i = k;
        while(a[i] == n - k + i && i > 0)
            i--;
        if(i == 0)
        {
            cout << k << endl;
        }
        else
        {
            a[i]++;
            while(i < k)
            {
                a[i + 1] = a[i] + 1;
                i++;
            }
            int cnt = 0;
            for(int i = 1; i <= k; i++)
            {
                if(mp[a[i]] == 0)   
                    cnt++;
            }
            cout << cnt;
            cout << endl;
        }
    }
    return 0;
}