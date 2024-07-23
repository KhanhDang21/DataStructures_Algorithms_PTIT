#include<bits/stdc++.h>
using namespace std;
int n, m, x, y, lt;
vector<vector<int>> a;
vector<int> vs;
void dfs(int u)
{
    stack<int> st;
    st.push(u);
    vs[u] = 1;
    while(!st.empty())
    {
        int tmp = st.top();
        st.pop();
        for(int i : a[tmp])
        {
            if(!vs[i])
            {
                vs[i] = 1;
                st.push(tmp);
                st.push(i);
                break;
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
        lt = 0;
        cin >> n >> m;
        a.clear(); a.resize(n + 5);
        vs.clear(); vs.resize(n + 5, 0);
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
                dfs(i);
                lt++;
            }
        }
        cout << lt << endl;
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