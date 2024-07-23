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
        int n, k;
        cin >> n >> k;
        int a[k + 5], i = k;
        for(int i = 1; i <= k; i++)
            cin >> a[i];
        while(a[i] == n - k + i && i > 0)
            i--;
        if(i == 0)
        {
            for(int i = 1; i <= k; i++)
                a[i] = i;
        }
        else
        {
            a[i]++;
            for(int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
        }
        for(int i = 1; i <= k; i++)
            cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}