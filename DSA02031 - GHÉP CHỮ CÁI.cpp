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
char c;
string s;
int vs[105];
bool check(char c)
{
	return (c != 'A' && c != 'E');
}
void display()
{
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == 'A' || s[i] == 'E')
		{
			if(i > 0 && i < s.size() - 1 && check(s[i - 1]) && check(s[i + 1]))
				return;
		}
	}
	cout << s << endl;
}
void Try(char i)
{
	for(char j = 'A'; j <= c; j++)
	{
		if(!vs[j])
		{
			vs[j] = 1;
			s.push_back(j);
			if(s.size() == c - 'A' + 1)
				display();
			else
				Try(i + 1);
			vs[j] = 0;
			s.pop_back();
		}
	}
}
int main()
{
	cin >> c;
	Try('A');
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