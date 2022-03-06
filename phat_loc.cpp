#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int a[16];
void in()
{
    int i = 1, check = 1, dem = 0;
    while (i < n)
    {
        if (a[i] == 6)
            dem++;
        else
            dem = 0;
        if (dem > 3)
        {
            check = 0;
            break;
        }
        i++;
    }
    if (check == 1)
    {
        for (int j = 0; j < n; j++)
            cout << a[j];
        cout << endl;
    }
}
void phatloc(int i)
{
    for (int j = 6; j <= 8; j += 2)
    {
        if ((i == n - 1 && j == 8) || (a[i - 1] == 8 && j == 8))
            continue;
        a[i] = j;
        if (i == n - 1)
            in();
        else
            phatloc(i + 1);
    }
}
int main()
{
    cin >> n;
    a[0] = 8;
    phatloc(1);
}