#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    vector<int> a;
    while (t--)
    {
        string s;
        int n;
        cin >> s;
        if (s == "PUSH")
        {
            cin >> n;
            a.push_back(n);
        }
        if (s == "PRINT")
        {
            if (a.size() > 0)
                cout << a[a.size() - 1];
            else
                cout << "NONE";
            cout << endl;
        }
        if (s == "POP" && !a.empty())
        {
            a.pop_back();
        }
    }
}