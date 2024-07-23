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
int n, k;
string s;
vector<string> res;
void check()
{
	string ss(k, 'A');
	int id = s.find(ss, 0);
	if(id != -1)
	{
		string tmp = s.substr(id + 1);
		if(tmp.find(ss) == -1)
			res.push_back(s);
	}
}
void Try(int i)
{
	for(char j = 'A'; j <= 'B'; j++)
	{
		s[i] = j;
		if(i == n - 1)
			check();
		else
			Try(i + 1);
	}
}
int main()
{
	cin >> n >> k;
	s.resize(n);
	Try(0);
	cout << res.size() << endl;
	sort(res.begin(), res.end());
	for(string x : res)
		cout << x << endl;
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