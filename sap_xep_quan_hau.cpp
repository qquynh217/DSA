#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, buoc;
int a[20];
bool Ok(int i, int j)
{
    for (int k = 1; k < i; k++)
        if (a[k] == j || abs(k - i) == abs(a[k] - j))
            return false;
    return true;
}
void Dat(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (Ok(i, j))
        {
            a[i] = j;
            if (i == n)
                buoc++;
            else
                Dat(i + 1);
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
        buoc = 0;
        Dat(1);
        cout << buoc << endl;
    }
}