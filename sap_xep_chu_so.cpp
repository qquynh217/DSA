#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[10] = {0};
void tach(int n)
{
    while (n > 0)
    {
        a[n % 10]++;
        n /= 10;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            tach(x);
        }
        for (int i = 0; i < 10; i++)
            if (a[i] > 0)
            {
                cout << i << ' ';
                a[i] = 0;
            }
        cout << endl;
    }
}