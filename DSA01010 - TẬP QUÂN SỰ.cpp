#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k], b[k];
        for(int i = 0; i < k; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        int tmp = n, check = 0;
        for(int i = k - 1; i >= 0; i--)
        {
            if(a[i] < tmp)
            {
                check = 1;
                a[i]++;
                for(int j = i + 1; j < k; j++)
                    a[j] = a[j - 1] + 1;
                break;
            }
            tmp--;
        }
        if(check == 0)
            cout << k << endl;
        else
        {
            int cnt = 0;
            for(int i = 0; i < k; i++)
            {
                for(int j = 0; j < k; j++)
                {
                    if(a[i] == b[j])
                    {
                        cnt++;
                        break;
                    }
                }
            }
            cout << k - cnt << endl;
        }
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