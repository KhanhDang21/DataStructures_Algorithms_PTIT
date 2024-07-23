#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    map<int, int> mp;
    while(n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for(auto x : mp)
    {
        if(x.second % 2 == 0)
            continue;
        else
        {
            reverse(s.begin() + x.first - 1, s.begin() + (s.size() - x.first + 1));
        }
    }
    cout << s;
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
Cho một chuỗi kí tự, các kí tự được đánh số từ 1 đến |s| với |s| là chiều dài của chuỗi.

Có M phép đổi chỗ, với mỗi 1 phép đổi chỗ, chúng ta lựa chọn 1 số ai (1 ≤ 2 * ai  ≤ |s|)  rồi thực hiện đảo ngược xâu từ vị trí ai đến |s| - ai + 1.

Hãy cho biết kết quả xâu s sau M phép biến đổi.

Input:

Dòng đầu tiên xâu s (2 ≤ |s| ≤ 2 * 105), chỉ gồm các ký tự là các chữ cái.

Dòng thứ 2 gồm số nguyên dương M (1 ≤ M ≤ 105) – số phép biển đổi.

Dòng tiếp theo bao gồm M số nguyên dương ai.

Output:

Hãy in ra xâu s thu được.

 

Test ví dụ:

Input

Ouput

abcdef

3

1 2 3

fbdcea

aabcde

2

2 2

aabcde
*/
