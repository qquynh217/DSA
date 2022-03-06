#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int C[1005][1005] = {0};
void tohop()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = (C[i - 1][j - 1] % P + C[i - 1][j] % P) % P;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    tohop();
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << C[n][k] << endl;
    }
}