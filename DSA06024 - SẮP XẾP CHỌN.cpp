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
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n - 1; i++)
    {
        int min_id = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[min_id])
                min_id = j;
        }
        swap(a[i], a[min_id]);
        cout << "Buoc " << i + 1 << ": ";
        for(int x = 0; x < n; x++)
            cout << a[x] << " ";
        cout << endl;
    }
    return 0;
}