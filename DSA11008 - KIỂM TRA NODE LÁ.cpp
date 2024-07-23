#include<bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'
using namespace std;
struct Node
{
	int data;
	Node *left, *right;
	Node(int data)
	{
		this -> data = data;
		this -> left = NULL;
		this -> right = NULL;
	}
};
void makeNode(Node *root, int data, char c)
{
	switch(c)
	{
		case 'L':
			root -> left = new Node(data);
			break;
		case 'R':
			root -> right = new Node(data);
			break;
	}
}
void insertNode(Node *root, int x, int y, char c)
{
	if(root == NULL)
		return;
	if(root -> data == x)
		makeNode(root, y, c);
	else
	{
		insertNode(root -> left, x, y, c);
		insertNode(root -> right, x, y, c);
	}
}
int countLeaf(Node *root)
{
	if(root == NULL)
		return 0;
	if(root -> left == NULL && root -> right == NULL)
		return 1;
	return countLeaf(root -> left) + countLeaf(root -> right);
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		Node *root = NULL;
		while(n--)
		{
			int x, y;
			char c;
			cin >> x >> y >> c;
			if(root == NULL)
				root = new Node(x);
			insertNode(root, x, y, c);
		}
		if(countLeaf(root -> left) == countLeaf(root -> right))
			cout << 1;
		else
			cout << 0;
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