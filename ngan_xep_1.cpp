#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    string s;
    int n;
    vector<int> a;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> n;
            a.push_back(n);
        }
        if (s == "pop")
        {
            a.pop_back();
        }
        if (s == "show")
        {
            if (a.size() > 0)
                for (int i = 0; i < a.size(); i++)
                    cout << a[i] << " ";
            else
                cout << "empty";
            cout << endl;
        }
    }
}