#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long a[n];
		long long MAX = 0;
		for(long long i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for(long long i = 0; i < n; i++)
		{
			MAX += (a[i] * i) % MOD;
		}
		cout << MAX % MOD << endl;
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