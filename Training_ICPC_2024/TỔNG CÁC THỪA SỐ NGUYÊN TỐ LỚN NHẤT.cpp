#include<bits/stdc++.h>

using namespace std;

int thuaSo(int k)
{
    int res;
    for(int i = 2; i <= sqrt(k); i++)
    {
        if(k % i == 0)
        {
            while(k % i == 0)
            {
                k /= i;
                res = i;
            }
        }
    }
    if(k != 1)
        res = k;
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        for(int i = l; i <= r; i++)
        {
            sum += thuaSo(i);
        }
        cout << sum << endl;
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