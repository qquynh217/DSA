#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        int dem = 0;
        cin >> s;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                s[i] = '1';
                break;
            }
            else
            {
                s[i] = '0';
            }
        }
        cout << s << endl;
    }
}