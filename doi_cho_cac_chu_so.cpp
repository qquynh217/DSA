#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void solve(int k, string s)
{
    int i = 0;
    while (i < s.length() && k > 0)
    {
        char max = s[i];
        int vt = i;
        for (int j = s.length() - 1; j > i; j--)
            if (s[j] > max)
            {
                max = s[j];
                vt = j;
            }
        if (vt > i)
        {
            swap(s[i], s[vt]);
            k--;
        }
        i++;
    }
    cout << s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        solve(k, s);
    }
}