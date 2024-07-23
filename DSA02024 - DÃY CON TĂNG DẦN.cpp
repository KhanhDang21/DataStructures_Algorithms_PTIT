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
int a[55] = {};
vector<string> vs;
vector<int> tmp;
void show()
{
    string s = "";
    for(int i = 0; i < tmp.size(); i++)
        s += to_string(tmp[i]) + " ";
    vs.push_back(s);
}
void Try(int i)
{
    for(int j = i + 1; j <= n; j++)
    {
        if(a[j] > a[i])
        {
            tmp.push_back(a[j]);
            if(tmp.size() > 1)
                show();
            Try(j);
            tmp.pop_back();
        }
    }
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    Try(0);
    sort(vs.begin(), vs.end());
    for(string x : vs)
        cout << x << endl;
    return 0;
}