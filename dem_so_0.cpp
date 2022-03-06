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
        int n, x, dem = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 0)
                dem++;
        }
        cout << dem << endl;
    }
}