#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, len;
int b[1005];
int a[1005], c[1005];
void in()
{
    for (int i = 1; i <= k; i++)
        cout << b[i] << " ";
    cout << endl;
}
void tohop(int i)
{
    for (int j = c[b[i - 1]] + 1; j < len - k + i; j++)
    {
        b[i] = a[j];
        if (i == k)
            in();
        else
            tohop(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    len = 1;
    for (auto i : s)
    {
        c[i] = len;
        a[len++] = i;
    }
    tohop(1);
}