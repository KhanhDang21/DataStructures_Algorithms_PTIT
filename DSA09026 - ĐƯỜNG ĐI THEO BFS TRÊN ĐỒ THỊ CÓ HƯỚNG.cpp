#include<bits/stdc++.h>
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
using namespace std;
int n, m, s, t;	
vector<vector<int>> a;
vector<int> vs;
vector<int> parent;
void bfs(int u)
{
	queue<int> q;
	vs[u] = 1;
	q.push(u);
	while(!q.empty())
	{
		int s = q.front();
		q.pop();
		for(int x : a[s])
		{
			if(vs[x] == 0)
			{
				q.push(x);
				parent[x] = s;
				vs[x] = 1;
			}
		}
	}
}
void trace()
{
	if(vs[t] == 0)
	{
		cout << "-1";
		return;
	}
	stack<int> st;
	st.push(t);
	int tmp = t;
	while(tmp != s)
	{
		tmp = parent[st.top()];
		st.push(tmp);
	}
	while(!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
} 
int main()
{
	int tt;
	cin >> tt;
	while(tt--)
	{
		a.clear();
		vs.clear(), parent.clear();
		cin >> n >> m >> s >> t;
		vs.resize(n + 5, 0);
		parent.resize(n + 5);
		a.resize(n + 5);
		while(m--)
		{
			int x, y;
			cin >> x >> y;
			a[x].push_back(y);
		}
		bfs(s);
		trace();
		cout << endl;
	}
	return 0;
}
/*
                     ,----,       ,----, 
                   ,/   .`|     ,/   .`| 
    ,---,        ,`   .'  :   ,`   .'  : 
  .'  .' `\    ;    ;     / ;    ;     / 
,---.'     \ .'___,/    ,'.'___,/    ,'  
|   |  .`\  ||    :     | |    :     |   
:   : |  '  |;    |.';  ; ;    |.';  ;   
|   ' '  ;  :`----'  |  | `----'  |  |   
'   | ;  .  |    '   :  ;     '   :  ;   
|   | :  |  '    |   |  '     |   |  '   
'   : | /  ;     '   :  |     '   :  |   
|   | '` ,/__    ;   |.'___   ;   |.'    
;   :  .'/  .\   '---' /  .\  '---'      
|   ,.'  \  ; |        \  ; |            
'---'     `--"          `--"             
*/