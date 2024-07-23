#include<bits/stdc++.h>
using namespace std;
int n;
int a[15];
void in(int n)
{
    cout << '[';
    for(int i = 0; i < n - 1; i++)
        cout << a[i] << ' ';
    cout << a[n - 1] << ']';
    cout << endl;
}
void Try(int n)
{
    in(n);
    for(int i = 0; i < n - 1; i++)
        a[i] = a[i] + a[i + 1];
    if(n != 1)
        Try(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        Try(n);
    }
    return 0;
}