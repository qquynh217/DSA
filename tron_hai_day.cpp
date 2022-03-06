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
        int n, m, x;
        cin >> n >> m;
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            a[x]++;
        }
        map<int, int>::iterator it;
        for (it = a.begin(); it != a.end(); it++)
        {
            for (int i = 0; i < it->second; i++)
            {
                cout << it->first << ' ';
            }
        }
        cout << endl;
    }
}