#include<bits/stdc++.h>
using namespace std;
int n, m, x, y;
vector<vector<int>> a;
vector<int> vs;
void dfs(int u)
{
    vs[u] = 1;
    for(int i : a[u])
    {
        if(!vs[i])
            dfs(i);
    }
}
void Strong()
{
    for(int i = 1; i <= n; i++)
    {
        vs.clear();
        vs.resize(n + 5);
        dfs(i);
        for(int j = 1; j <= n; j++)
        {
            if(!vs[j])
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        a.clear(); a.resize(n + 5);
        vs.clear(); vs.resize(n + 5);
        while(m--)
        {
            cin >> x >> y;
            a[x].push_back(y);
        }
        Strong();
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