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
    	char a[15];
    	for(int i = 1; i <= n; i++)
    		a[i] = 'A';
		while(1)
		{
			for(int i = 1; i <= n; i++)
				cout << a[i];
			cout << ' ';
			int i = n;
			while(a[i] == 'B' && i > 0)
			{
				a[i] = 'A';
				i--;	
			}	
			if(i == 0)
				break;
			else
				a[i] = 'B';
		}
		cout << endl;
    }
    return 0;
}