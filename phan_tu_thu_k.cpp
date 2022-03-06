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
        int n, m, k;
        cin >> n >> m >> k;
        int x;
        map<int, int> mymap;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mymap[x]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            mymap[x]++;
        }
        vector<int> a;
        for (auto i : mymap)
        {
            for (int j = 0; j < i.second; j++)
                a.push_back(i.first);
        }
        cout << a[k - 1] << endl;
    }
}