#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[100], b[100];
int check[10000] = {0};
void in()
{
    for (int i = 0; i < n; i++)
        cout << b[i] << ' ';
    cout << endl;
}
void hoanvi(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (check[j] == 0)
        {
            b[i] = a[j];
            check[j] = 1;
            if (i == n - 1)
                in();
            else
                hoanvi(i + 1);
            check[j] = 0;
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    hoanvi(0);
}