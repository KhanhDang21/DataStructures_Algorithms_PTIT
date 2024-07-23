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
int n, m, u, v, q, x, y;
vector<vector<int>> a;
vector<int> vs;
void dfs(int u)
{
	vs[u] = 1;
	for(int x : a[u])
	{
		if(!vs[x])
		{
			dfs(x);
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		a.clear();
		a.resize(n + 5);
		while(m--)
		{
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		cin >> q;
		while(q--)
		{
			vs.clear();
			vs.resize(n + 5, 0);
			cin >> x >> y;
			dfs(x);
			if(vs[y] == 1)
				cout << "YES";
			else
				cout << "NO";
			cout << endl;
		}
		cout << endl;
	}
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