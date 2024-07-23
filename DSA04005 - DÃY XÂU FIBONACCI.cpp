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
long long f[105];
void Cre()
{
	f[1] = f[2] = 1;
	for(int i = 3; i <= 92; i++)
		f[i] = f[i - 1] + f[i - 2];
}
int main()
{
	Cre();
	int t;
	cin >> t;
	while(t--)
	{
		long long n, k;
		cin >> n >> k;
		while(n > 2)
		{
			if(k > f[n - 2])
			{
				k -= f[n - 2];
				n--;
			}
			else
				n -= 2;
		}
		if(n == 1)
			cout << "A";
		else
			cout << "B";
		cout << endl;
	}
	return 0;
}