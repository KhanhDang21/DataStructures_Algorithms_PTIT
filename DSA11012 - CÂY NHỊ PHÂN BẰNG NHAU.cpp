#include<bits/stdc++.h>
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
    if(c == 'L')
        root -> left = new Node(data);
    else
        root -> right = new Node(data);
}
void insert(Node *root, int x, int y, char c)
{
    if(root == NULL)
        return;
    if(root -> data == x)
        makeNode(root, y, c);
    else
    {
        insert(root -> left, x, y, c);
        insert(root -> right, x, y, c);
    }
}
bool isEqual(Node *a, Node *b)
{
    if(a == NULL && b == NULL)
        return true;
    if(a != NULL && b != NULL && a -> data == b -> data)
        return isEqual(a -> left, b -> left) && isEqual(a -> right, b -> right);
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        Node *a = NULL;
        int n;
        cin >> n;
        while(n--)
        {
            int x, y;
            char c;
            cin >> x >> y >> c;
            if(a == NULL)
                a = new Node(x);
            insert(a, x, y, c);
        }
        Node *b = NULL;
        int m; cin >> m;
        while(m--) 
        {
            int x, y; 
            char c;
            cin >> x >> y >> c;
            if(b == NULL)
                b = new Node(x);
            insert(b, x, y, c);
        }
        cout << isEqual(a, b) << endl;
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