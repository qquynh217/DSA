#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k;
int a[11][11], row[11], res[100][11];
bool col[11] = {false};
int temp = 0, t = 0;
void save()
{
    if (temp == k)
    {
        for (int i = 0; i < n; i++)
            res[t][i] = row[i];
        t++;
    }
}
void Try(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (col[j] == false)
        {
            row[i] = j + 1;
            temp += a[i][j];
            col[j] = true;
            if (i == n - 1)
                save();
            else
                Try(i + 1);
            temp -= a[i][j];
            col[j] = false;
        }
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    Try(0);
    cout << t << endl;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
            cout << res[i][j] << ' ';
        cout << endl;
    }
}