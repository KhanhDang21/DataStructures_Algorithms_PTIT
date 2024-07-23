#include<bits/stdc++.h>
using namespace std;
int n, m, x, y;
vector<vector<int>> a;
vector<int> vs;
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        for(int x : a[s])
        {
            if(!vs[x])
            {
                q.push(x);
                vs[x] = 1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int cnt = 0;
        cin >> n >> m;
        a.clear(); a.resize(n + 5);
        vs.clear(); vs.resize(n + 5);
        while(m--)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            if(!vs[i])
            {
                cnt++;
                bfs(i);
            }
        }
        cout << cnt << endl;
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