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
    Node *right, *left;
    Node(int data)
    {
        this -> data = data;
        this -> right = right;
        this -> left = left;
    }
};
Node *createrBST(int a[], int s, int e)
{
    if(s > e)
        return NULL;
    int mid = (s + e) / 2;
    Node *root = new Node(a[mid]);
    root -> left = createrBST(a, s, mid - 1);
    root -> right = createrBST(a, mid + 1, e);
    return root;
}
void preOrder(Node *root)
{
    if(root == NULL)
        return;
    cout << root -> data << " ";
    if(root -> left)
        preOrder(root -> left);
    if(root -> right)
        preOrder(root -> right);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        Node *root = createrBST(a, 0, n - 1);
        preOrder(root);
        cout << endl;
    }
    return 0;
}