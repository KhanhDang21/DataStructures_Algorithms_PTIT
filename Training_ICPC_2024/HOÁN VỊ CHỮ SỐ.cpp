#include<bits/stdc++.h>

using namespace std;

string a, b;
int vs[105];
set<string> res;

void Try(int i)
{
    for(int j = 0; j < a.size(); j++)
    {
        if(!vs[j])
        {
            vs[j] = 1;
            b[i] = a[j];
            if(i == a.size() - 1)
            {
               res.insert(b);
            }
            else
                Try(i + 1);
            vs[j] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a;
        int n = a.size();
        memset(vs, 0, sizeof(vs));
        b.resize(n);
        res.clear();
        Try(0);
        for(auto x : res)
        {
            if(x[0] == '0')
                x.erase(0, 1);
            cout << x << endl;
        }
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