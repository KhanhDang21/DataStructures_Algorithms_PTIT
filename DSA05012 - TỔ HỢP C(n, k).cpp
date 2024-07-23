#include<bits/stdc++.h>
using namespace std;
long long dp[1005][1005];
const long long mod = 1e9 + 7;
void prepare()
{
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i)
                dp[i][j] = 1;
            else if(j == 1 || j == i - 1)
                dp[i][j] = i;
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            dp[i][j] %= mod;
        }
    }
}
int main()
{
    prepare();
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << dp[n][k] << endl;
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