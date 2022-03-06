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
        int n;
        cin >> n;
        int x, kt = 0;
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (auto i : a)
            if (i.second > n / 2)
            {
                cout << i.first;
                kt = 1;
                break;
            }
        if (kt == 0)
            cout << "NO";
        cout << endl;
    }
}