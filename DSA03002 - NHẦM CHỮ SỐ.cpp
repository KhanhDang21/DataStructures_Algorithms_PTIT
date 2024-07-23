#include<bits/stdc++.h>
using namespace std;
string loi5(string s)
{
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '5')
			s[i] = '6';
	}
	return s;
}
string loi6(string s)
{
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '6')
			s[i] = '5';
	}
	return s;
}
int main()
{
	string a, b;
	cin >> a >> b;
	vector<long long> v;
	v.push_back(stoll(loi5(a)) + stoll(loi5(b)));
	v.push_back(stoll(loi5(a)) + stoll(loi6(b)));
	v.push_back(stoll(loi6(a)) + stoll(loi5(b)));
	v.push_back(stoll(loi6(a)) + stoll(loi6(b)));
	sort(v.begin(), v.end());
	int n = v.size();
	cout << v[0] << " " << v[n - 1];
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