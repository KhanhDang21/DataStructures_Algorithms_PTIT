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
const long long MOD = 1e9 + 7;
long long LuyThuaDao(long long n, long long k)
{
    if(k == 0)
        return 1;
    long long x = LuyThuaDao(n, k / 2);
    if(k % 2 == 0)
        return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}
long long DaoSo(long long n)
{
    long long res = 0;
    while(n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long r = DaoSo(n);
        cout << LuyThuaDao(n, r) << endl;
    }
    return 0;
}