#include<bits/stdc++.h>
using namespace std;
vector<long long> f(55);
void create()
{
    f[1] = 1;
    for(int i = 2; i < f.size(); i++)
        f[i] = f[i - 1] * 2;
}
int main()
{
    create();
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        for(int i = n; i >= 1; i--)
        {
            if(k > f[i])
                k -= f[i];
            else if(k == f[i])
            {
                cout << i;
                break;
            }
        }
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