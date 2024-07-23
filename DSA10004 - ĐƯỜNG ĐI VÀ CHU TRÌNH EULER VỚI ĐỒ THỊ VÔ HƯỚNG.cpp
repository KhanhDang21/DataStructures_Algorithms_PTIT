#include<bits/stdc++.h>
using namespace std;
int n, m, x, y;
vector<vector<int>> a;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        a.clear(); 
        a.resize(n + 5);
        while(m--)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int odd_deg = 0;
        for(int i = 1; i <= n; i++)
            odd_deg += (a[i].size() % 2 == 1);
        if(odd_deg == 0)
            cout << 2;
        else if(odd_deg == 2)
            cout << 1;
        else
            cout << 0;  
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