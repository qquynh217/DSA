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
        map<int, int> m1, m2, m3;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            m1[x]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            if (m1.find(x) != m1.end())
            {
                m2[x]++;
            }
        }
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            if (m2.find(x) != m2.end())
                m3[x]++;
        }
        if (m3.size() > 0)
            for (auto it : m3)
            {
                int len = min(min(it.second, m1[it.first]), m2[it.first]);
                for (int i = 0; i < len; i++)
                {
                    cout << it.first << " ";
                }
            }
        else
            cout << "NO";
        cout << endl;
    }
}