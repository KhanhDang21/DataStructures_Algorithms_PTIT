#include<bits/stdc++.h>
using namespace std;
long long bin[105];
void Cre()
{
    bin[1] = bin[2] = 1;
    for(int i = 3; i <= 100; i++)
        bin[i] = bin[i - 2] + bin[i - 1];
}
int main()
{
    Cre();
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        while(1)
        {
            if(n == 1 || n == 2)
            {
                if(n == 1)
                    cout << "0";
                else
                    cout << "1";
                break;
            }
            if(k <= bin[n - 2])
                n -= 2;
            else
            {
                k -= bin[n - 2];
                n -= 1;
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