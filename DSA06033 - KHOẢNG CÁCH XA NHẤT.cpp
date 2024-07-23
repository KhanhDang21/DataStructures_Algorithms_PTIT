#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n; 
        int a[n];
        pair<int, int> p[n];
        for(int i = 0; i < n; i++)
        {
            cin >> p[i].first;
            p[i].second = i;
        }
        sort(p, p + n);
        int res = INT_MIN, id = p[0].second, val = p[0].first;
        for(int i = 1; i < n; i++)
        {
            if(p[i].first > val)
                res = max(res, p[i].second - id);
            if(id > p[i].second)
            {
                id = p[i].second;
                val = p[i].first;
            }
        }
        cout << res << endl;
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