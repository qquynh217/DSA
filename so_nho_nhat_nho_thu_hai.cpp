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
        int x;
        set<int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.insert(x);
        }
        if (a.size() == 1)
            cout << -1;
        else
        {
            set<int>::iterator it;
            int k = 0;
            for (it = a.begin(); it != a.end(); it++)
            {
                if (k < 2)
                {
                    cout << *it << ' ';
                    k++;
                }
                else
                    break;
            }
        }
        cout << endl;
    }
}