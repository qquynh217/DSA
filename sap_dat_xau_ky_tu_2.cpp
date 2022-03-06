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
        int d;
        cin >> d;
        string s;
        cin >> s;
        map<char, int> m;
        int max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
            if (max < m[s[i]])
                max = m[s[i]];
        }
        if (d <= (s.length() + 1) / max)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}