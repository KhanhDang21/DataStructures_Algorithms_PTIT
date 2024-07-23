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
long long luyThua(long long n, long long k)
{
	if(k == 0)
		return 1;
	if(k == 1)
		return n;
	long long x = luyThua(n, k / 2);
	long long y = (x * x) % MOD;
	if(k % 2 == 0)
		return y;
	return (n * y) % MOD;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, k;
		cin >> n >> k;
		cout << luyThua(n, k) << endl;
	}
}