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
int n;
int a[55], vs[55];
void display()
{
	bool check = 0;
	for(int i = 1; i < n; i++)
	{
		if(abs(a[i] - a[i + 1]) == 1)
		{
			check = 1;
			break;
		}
	}
	if(check == 0)
	{
		for(int i = 1; i <= n; i++)
			cout << a[i];
		cout << endl;
	}
}
void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!vs[j])
		{
			vs[j] = 1;
			a[i] = j;
			if(i == n)
				display();
			else
				Try(i + 1);
			vs[j] = 0;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1);
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