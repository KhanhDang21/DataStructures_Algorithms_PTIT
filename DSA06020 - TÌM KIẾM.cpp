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
int binSearch(int a[], int x, int l, int r)
{
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(a[mid] == x)
			return mid;
		else if(a[mid] > x)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int l = 0, r = n - 1;
		int check = binSearch(a, x, l, r);
		if(check != -1)
			cout << '1';
		else
			cout << "-1";
		cout << endl;
	}
	return 0;
}