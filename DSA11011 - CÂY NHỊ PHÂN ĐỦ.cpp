#include<bits/stdc++.h>
using namespace std;
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
void MakeNode(Node *root, int n1, int n2, char c)
{
    switch(c)
    {
        case 'L':
            root -> left = new Node(n2);
            break;
        case 'R':
            root -> right = new Node(n2);
            break;
    }
}
void Insert(Node *root, int n1, int n2, char c)
{
    if(root == NULL)
        return;
    if(root -> data == n1)
        MakeNode(root, n1, n2, c);
    else
    {
        Insert(root -> left, n1, n2, c);
        Insert(root -> right, n1, n2, c);
    }
}
bool isFullBinTree(Node *root)
{
    if(root == NULL)
        return true;
    if(root -> left == NULL && root -> right == NULL)
        return true;
    if(!(root -> left != NULL && root -> right != NULL))
        return false;
    return isFullBinTree(root -> left) && isFullBinTree(root -> right);
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
            int n1, n2;
            char c;
            cin >> n1 >> n2 >> c;
            if(root == NULL)
                root = new Node(n1);
            Insert(root, n1, n2, c);
        }
        cout << isFullBinTree(root);
        cout << endl;
    }
    return 0;
}