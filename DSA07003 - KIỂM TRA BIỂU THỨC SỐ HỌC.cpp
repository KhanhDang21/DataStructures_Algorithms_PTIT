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
void check(string s)
{
	stack<char> st;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] != ')')
			st.push(s[i]);
		else
		{
			bool tmp = 0;
			while(!st.empty())
			{
				char c = st.top();
				st.pop();
				if(c == '+' || c == '-' || c == '*' || c == '/')
					tmp = 1;
				if(c == '(')
					break;
			}
			if(tmp == 0)
			{
				cout << "Yes";
				return;
			}
		}
	}
	cout << "No";
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{	
		string s;
		getline(cin, s);
		check(s);
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