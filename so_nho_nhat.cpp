#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void minNumber(int s, int d)
{
    int a[d + 5];
    for (int i = d; i > 0; i--)
    {
        int x = 9;
        if (i != 1)
        {
            while (s - x <= 0)
            {
                x--;
            }
            a[i] = x;
        }
        else
            a[i] = s;
        s -= x;
    }
    for (int i = 1; i <= d; i++)
        cout << a[i];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, d;
        cin >> s >> d;
        if (d * 9 < s)
            cout << -1;
        else
        {
            minNumber(s, d);
        }
        cout << endl;
    }
}