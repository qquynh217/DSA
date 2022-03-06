// Trò chơi với các con số AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[15], check[10] = {0};
void in()
{
    int k = 1;
    while (k < n && abs(a[k] - a[k - 1]) > 1)
    {
        k++;
    }
    if (k == n)
    {
        for (int i = 0; i < n; i++)
            cout << a[i];
        cout << endl;
    }
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
            if (i == n - 1)
                in();
            else
                Try(i + 1);
            check[j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(0);
    }
}