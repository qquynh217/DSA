#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, a[20];
void in()
{
    int check[20] = {0};
    for (int i = 1; i <= k; i++)
        check[a[i]] = 1;
    for (int i = 1; i <= n; i++)
        cout << check[i];
    cout << endl;
}
void toHop(int i)
{
    for (int j = n; j >= a[i - 1] + 1; j--)
    {
        a[i] = j;
        if (i == k)
            in();
        else
            toHop(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        toHop(1);
    }
}