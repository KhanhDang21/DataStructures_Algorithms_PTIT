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
        int a[n];
        set<int> se;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            se.insert(a[i]);
        }
        if(se.size() < 2)
            cout << "-1";
        else
        {
            int cnt = 0;
            for(auto x : se)
            {
                if(cnt == 2)
                    break;
                else
                {
                    cout << x << " ";
                    cnt++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}