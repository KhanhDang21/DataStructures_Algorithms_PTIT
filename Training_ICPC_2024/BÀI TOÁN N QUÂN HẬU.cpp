#include<bits/stdc++.h>

using namespace std;

int n, x[100], cot[100], d1[100], d2[100];
int cnt = 0;

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1)
        {
            x[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            if(i == n)  
                cnt++;
            else
                Try(i + 1);
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
        } 
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= 99; i++)
    {
        cot[i] = d1[i] = d2[i] = 1;
    }
    Try(1);
    cout << cnt;
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
Hãy đếm số cách xếp N quân hậu lên bàn cờ N x N sao cho không có 2 quân hậu nào xung đột với nhau?

Input: 

Một số nguyên N duy nhất (4 <= N <= 14).

Output: 

In ra số cách xếp quân hậu.

 

Test ví dụ:

Input:

Output:

4

 

2

8

 

92
*/