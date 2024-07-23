#include<bits/stdc++.h>
using namespace std;
int n, m, u, v, x, y, lt;
vector<vector<int>> a;
vector<pair<int, int>> ed;
vector<bool> vs;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();
        vs[tmp] = 1;
        for(int i : a[tmp])
        {
            if((tmp == x && i == y) || (tmp == y && i == x))
                continue;
            if(!vs[i])
                q.push(i);
        }
    }
}
void canhCau()
{
    vs.clear();
    vs.resize(n + 5, false);
    int new_lt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!vs[i])
        {
            bfs(i);
            new_lt++;
        }
    }
    if(new_lt > lt)
        cout << x << " " << y << " ";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        lt = 0;
        x = y = -1;
        cin >> n >> m;  
        a.clear(); a.resize(n + 5);
        ed.clear(); ed.resize(m + 5);
        vs.clear(); vs.resize(n + 5, false);
        for(int i = 1; i <= m; i++)
        {
            cin >> u >> v;
            ed[i] = {u, v};
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for(int i = 1; i <= n; i++)
        {
            if(!vs[i])
            {
                bfs(i);
                lt++;
            }
        }
        for(int i = 1; i <= m; i++)
        {
            x = ed[i].first;
            y = ed[i].second;
            canhCau();
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