#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[20], b[10][10];
int sum, res;
bool Ok(int i, int j)
{
    for (int k = 1; k < i; k++)
        if (a[k] == j || abs(k - i) == abs(a[k] - j))
            return false;
    return true;
}
void Dat(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (Ok(i, j))
        {
            a[i] = j;
            sum += b[i][j];
            if (i == 8)
            {
                if (res < sum)
                    res = sum;
            }
            else
                Dat(i + 1);
            sum -= b[i][j];
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 8; i++)
            for (int j = 1; j <= 8; j++)
                cin >> b[i][j];
        sum = 0;
        res = 0;
        Dat(1);
        cout << res << endl;
    }
}