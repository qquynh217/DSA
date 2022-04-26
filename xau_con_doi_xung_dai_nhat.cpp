#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
string s;
bool doixung(int dau, int cuoi)
{
    while (dau < cuoi)
    {
        if (s[dau] != s[cuoi])
            return false;
        dau++;
        cuoi--;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int res = 1;
        for (int i = 0; i < s.length() - 1; i++)
        {
            int vt = s.length() - 1;
            while (vt > i && vt - i + 1 > res)
            {
                if (s[i] == s[vt] && doixung(i, vt))
                    res = max(res, vt - i + 1);
                vt--;
            }
        }
        cout << res << endl;
    }
}