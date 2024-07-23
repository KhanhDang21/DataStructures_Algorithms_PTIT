#include<bits/stdc++.h>

using namespace std;

const int Max = 1e6;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> mark(Max + 1, 0);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mark[a[i]]++;
        }
        int gcd_max = 1;
        for(int i = Max; i >= 1; i--)
        {
            int cnt = 0;
            for(int j = i; j <= Max; j += i)
            {
                cnt += mark[j];
                if(cnt >= 2)
                {
                    gcd_max = i;
                    break;
                }
            }
            if(cnt >= 2)
                break;
        }
        cout << gcd_max << endl;
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

/*
Cho dãy số A[] có N phần tử. Nhiệm vụ của bạn là hãy tìm 2 số nguyên trong dãy số sao cho UCLN của chúng là lớn nhất có thể.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test bắt đầu bởi số nguyên dương N (1 ≤ N ≤ 100 000).

Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 106).

Output: 

Với mỗi test, in ra UCLN chung lớn nhất tìm được trên một dòng.

Test ví dụ:

Input

Output

2

5

4 14 15 7 9

4

1 6 9 2

7

3
*/