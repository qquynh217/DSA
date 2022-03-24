#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int A[10][10] = {0}, n;
int dem = 0;
bool check = false;
void in()
{
    check = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}
void move(int x, int y)
{
    dem++;
    A[x][y] = dem;
    for (int i = 0; i < 8; i++)
    {
        if (dem == n * n)
        {
            in();
            exit(0);
        }
        int u = x + X[i];
        int v = y + Y[i];
        if (u > 0 && u <= n && v > 0 && v <= n && A[u][v] == 0)
            move(u, v);
    }
    dem--;
    A[x][y] = 0;
}
int main()
{
    cin >> n;
    int a, b;
    cin >> a >> b;
    move(a, b);
    if (!check)
        cout << "No solution!";
    return 0;
}