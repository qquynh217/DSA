#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
        int f[10005] = {0};
        f[0] = 1;
        f[1] = 1;
        for (int i = 2; i <= s.length(); i++)
        {
            f[i] = 0;
            if (s[i - 1] > '0')
                f[i] = f[i - 1];
            if (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] < '7'))
                f[i] += f[i - 2];
        }
        cout << f[s.length()] << endl;
    }
}