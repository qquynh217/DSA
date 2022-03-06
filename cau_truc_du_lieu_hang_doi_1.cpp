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
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x;
            if (x == 1)
                cout << q.size() << endl;
            if (x == 2)
            {
                if (q.empty())
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            if (x == 3)
            {
                cin >> y;
                q.push(y);
            }
            if (x == 4 && !q.empty())
                q.pop();
            if (x == 5)
            {
                if (!q.empty())
                    cout << q.front() << endl;
                else
                    cout << -1 << endl;
            }
            if (x == 6)
            {
                if (!q.empty())
                    cout << q.back() << endl;
                else
                    cout << -1 << endl;
            }
        }
    }
}