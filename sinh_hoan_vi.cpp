#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[100];
void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
int check[100] = {0};
void sinhHoanVi(int i)
{
    for (int j = n; j >= 1; j--) // nguoc
    {
        if (check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
            if (i == n)
                in();
            else
                sinhHoanVi(i + 1);
            check[j] = 0;
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
        sinhHoanVi(1);
        cout << endl;
    }
}