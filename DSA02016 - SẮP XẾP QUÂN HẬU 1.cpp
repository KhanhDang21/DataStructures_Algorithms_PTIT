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
int n, a[55], b[55], c[55], ans;
void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(a[j] == 0 && b[i + j - n] == 0 && c[i - j + n] == 0)
		{
			a[j] = b[i + j - n] = c[i - j + n] = 1;
			if(i == n)
				ans++;
			else
				Try(i + 1);
			a[j] = b[i + j - n] = c[i - j + n] = 0;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ans = 0;
		cin >> n;
		Try(1);
		cout << ans;
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