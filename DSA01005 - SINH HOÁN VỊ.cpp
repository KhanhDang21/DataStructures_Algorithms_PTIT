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
    	int a[100];
    	for(int i = 1; i <= n; i++)
    		a[i] = i;
    	while(1)
    	{
    		for(int i = 1; i <= n; i++)
    			cout << a[i];
    		cout << ' ';
    		int i = n - 1;
    		while(a[i] > a[i + 1] && i > 0)
    			i--;
    		if(i == 0)
    			break;
    		int k = n;
    		while(a[k] < a[i])
    			k--;
    		swap(a[k], a[i]);
    		int l = i + 1, r = n;
    		while(l < r)
    		{
    			swap(a[l], a[r]);
    			l++; r--;
			}
		}
		cout << endl;
    }
    return 0;
}