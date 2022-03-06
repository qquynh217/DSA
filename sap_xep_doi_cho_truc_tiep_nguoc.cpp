#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void in(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[200];
        int b[200][200];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                    swap(a[i], a[j]);
            }
            for (int j = 0; j < n; j++)
                b[i][j] = a[j];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            in(b[i], n);
        }
    }
}