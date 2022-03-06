#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
string s;
void in()
{
    for (int i = 0; i < n; i++)
        cout << s[i];
    cout << " ";
}
void solve(int i)
{
    for (char j = 'A'; j <= 'B'; j++)
    {
        s[i] = j;
        if (i == n - 1)
            in();
        else
            solve(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(0);
        cout << endl;
    }
}