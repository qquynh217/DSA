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
        string n;
        cin >> n;
        string b = n;
        bool check = false;
        for (int i = 0; i < b.length(); i++)
            if (b[i] >= '2' || check)
            {
                b[i] = '1';
                check = true;
            }
        int res = 0, p = 1;
        reverse(b.begin(), b.end());
        for (int i = 0; i < b.size(); i++)
        {
            res += (b[i] - '0') * p;
            p *= 2;
        }
        cout << res << endl;
    }
}