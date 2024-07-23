#include<bits/stdc++.h>

using namespace std;

long long fibo[46];

void init()
{
    fibo[0] = fibo[1] = 1;
    for(int i = 2; i <= 45; i++)
        fibo[i] = fibo[i - 2] + fibo[i - 1];
}

long long countA(int n, int k)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(k <= fibo[n - 1])
        return countA(n - 1, k);
    return countA(n - 1, fibo[n - 1]) + countA(n - 2, k - fibo[n - 1]);
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << countA(n, k);
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