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
    stack<string> st;
    for(int i = 0; i < n - 1; i++)
    {
        string s = "";
        int minID = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[minID])
                minID = j;
        }
        swap(a[i], a[minID]);
        s += "Buoc ";
        s += to_string(i + 1);
        s += ": ";
        for(int x = 0; x < n; x++)
        {
            s += to_string(a[x]);
            s += " ";
        }
        st.push(s);
    }
    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}