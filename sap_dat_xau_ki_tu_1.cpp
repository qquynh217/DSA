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
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < s.length(); i++)
            m[s[i]]++;
        int max = 0;
        for (auto it : m)
            if (it.second > max)
                max = it.second;
        if (max > s.length() / 2 + s.length() % 2)
            cout << -1;
        else
            cout << 1;
        cout << endl;
    }
}