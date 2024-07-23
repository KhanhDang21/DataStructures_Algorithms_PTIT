#include<bits/stdc++.h>

using namespace std;

int n, s, e, u, d;

void bfs()
{
    cin >> n >> s >> e >> u >> d;
    queue<int> q;
    q.push(s);
    vector<int> step(n + 1, -1);
    step[s] = 0;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();

        if(s + u <= n && step[s + u] == -1)
        {
            step[s + u] = step[s] + 1;
            if(s + u == e)
            {
                cout << step[s + u];
                return;
            }
            q.push(s + u);
        }

        if(s - d > 0 && step[s - d] == -1)
        {
            step[s - d] = step[s] + 1;
            if(s - d == e)
            {
                cout << step[s - d];
                return;
            }
            q.push(s - d);
        }
    }
    cout << -1;
}

int main()
{
    bfs();
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

/*
Trong một tòa nhà có N tầng, các tầng được đánh số từ 1 tới N. Hiện tại bạn đang đứng ở tầng ST và cần đi đến tầng EN. Tại mỗi tầng, thang máy chỉ có 2 nút là “UP u” và “DOWN d”.

Nút “UP u” có thể đưa bạn lên đúng u tầng nếu như có đủ số tầng ở phía trên.

Nút “DOWN d” có thể đưa bạn xuống đúng d tầng nếu như có đủ số tầng ở phía dưới.

Trường hợp không có đủ số tầng thì thang máy sẽ không lên hoặc không xuống. Hãy tính số lần phải bấm nút ít nhất để có thể đến được tầng EN.

Input:

Gồm 5 số nguyên: N, ST, EN, u và d.

(1 ≤ N, ST, EN, ≤ 106, 0 ≤ u, d ≤ 106)

Output: 

In ra số lần bấm nút ít nhất để có thể đi được từ tầng ST tới tầng EN. Nếu không thể thực hiện được, in ra -1.

Test ví dụ:

Input

Output

10 1 10 2 1

 

6

100 10 1 1 0

 

-1
*/