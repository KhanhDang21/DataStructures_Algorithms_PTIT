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
		string s;
		int n;
		cin >> n;
		queue<string> q;
		q.push("9");
		for(int i = 1; i <= 1000; i++)
		{
			string tmp = q.front();
			if(stoi(q.front()) % n == 0)
			{
				cout << q.front() << " ";
				break;
			}
			q.pop();
			q.push(tmp + "0");
			q.push(tmp + "9");
		}
		cout << endl;
	}
}