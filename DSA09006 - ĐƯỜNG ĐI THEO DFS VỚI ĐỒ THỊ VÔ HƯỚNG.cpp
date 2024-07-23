#include<bits/stdc++.h>
using namespace std;
int n, m, x, y, s, t;
vector<vector<int>> a;
vector<int> vs;
vector<int> parent;
void dfs(int u)
{
    stack<int> st;
    st.push(u);
    vs[u] = 1;
    while(!st.empty())
    {
        int tmp = st.top();
        st.pop();
        if(tmp == t)
            return;
        for(int i : a[tmp])
        {
            if(!vs[i])
            {
                vs[i] = 1;
                st.push(tmp);
                st.push(i);
                parent[i] = tmp;
                break;
            }
        }
    }
}
void trace()
{
    if(!vs[t])
    {
        cout << -1;
        return;
    }
    stack<int> st;
    int tmp = t;
    while(tmp != s)
    {
        st.push(tmp);
        tmp = parent[st.top()];
    }
    st.push(s);
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
int main()
{
    int tt;
    cin >> tt;
    while(tt--)
    {
        cin >> n >> m >> s >> t;
        a.clear(); a.resize(n + 5);
        vs.clear(); vs.resize(n + 5, 0);
        parent.clear(); parent.resize(n + 5);
        while(m--)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        dfs(s);
        trace();
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