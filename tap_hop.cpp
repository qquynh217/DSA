#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int dem, temp = 0;
int a[11], n, k, s;
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        temp += j;
        if (i == k)
        {
            if (temp == s)
                dem++;
        }
        else
            Try(i + 1);
        temp -= j;
    }
}
int main()
{
    do
    {
        cin >> n >> k >> s;
        dem = 0;
        a[0] = 0;
        temp = 0;
        if (n != 0 && s != 0 && k != 0)
        {
            Try(1);
            cout << dem << endl;
        }
    } while (n != 0 && s != 0 && k != 0);
}