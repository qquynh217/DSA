#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[10][10];
vector<string> res;
bool ok[10][10];
void Way(int i, int j, string s)
{
    if (a[0][0] == 0 || a[n - 1][n - 1] == 0)
        return;
    if (i == n - 1 && j == n - 1)
        res.push_back(s);
    if (a[i + 1][j] == 1 && i + 1 < n && !ok[i + 1][j])
    {
        ok[i][j] = true;
        Way(i + 1, j, s + "D");
        ok[i][j] = false;
    }
    if (a[i][j + 1] == 1 && j + 1 < n && !ok[i][j + 1])
    {
        ok[i][j] = true;
        Way(i, j + 1, s + "R");
        ok[i][j] = false;
    }
    if (a[i - 1][j] == 1 && i - 1 >= 0 && !ok[i - 1][j])
    {
        ok[i][j] = true;
        Way(i - 1, j, s + "U");
        ok[i][j] = false;
    }
    if (a[i][j - 1] == 1 && j - 1 >= 0 && !ok[i][j - 1])
    {
        ok[i][j] = true;
        Way(i, j - 1, s + "L");
        ok[i][j] = false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                ok[i][j] = false;
            }
        Way(0, 0, "");
        if (res.size() == 0)
            cout << -1;
        else
        {
            sort(res.begin(), res.end());
            for (int i = 0; i < res.size(); i++)
                cout << res[i] << " ";
        }
        res.clear();
        cout << endl;
    }
}