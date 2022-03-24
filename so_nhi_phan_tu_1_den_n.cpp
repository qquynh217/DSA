#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void solve(int n)
{
    string s[n + 5];
    s[0] = "1";
    int k = 0, i = 0;
    while (i < n)
    {
        s[i + 1] = s[k] + "0";
        s[i + 2] = s[k] + "1";
        k++;
        i += 2;
    }
    for (int i = 0; i < n; i++)
        cout << s[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
}