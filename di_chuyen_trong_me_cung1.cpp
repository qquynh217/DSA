#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
int a[20][20] = {0};
vector<int> b;
bool check;
void in()
{
    check = true;
    for (int i = 0; i < b.size(); i++)
        if (b[i] == 0)
            cout << 'D';
        else
            cout << 'R';
    cout << ' ';
}
void Way(int i, int j)
{
    if (i == n - 1 && j == n - 1)
        in();
    for (int k = 0; k <= 1; k++)
    {
        b.push_back(k);
        if (k == 0 && i + 1 < n && a[i + 1][j] == 1)
            Way(i + 1, j);
        else if (k == 1 && j + 1 < n && a[i][j + 1] == 1)
            Way(i, j + 1);
        b.pop_back();
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        check = false;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        if (a[0][0] == 1)
        {
            Way(0, 0);
            if (check == false)
                cout << -1;
        }
        else
            cout << -1;
        cout << endl;
    }
}
