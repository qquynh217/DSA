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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int buoc = 0, b[200][200];
        for (int i = 0; i < n - 1; i++)
        {
            bool doicho = false;
            for (int j = 0; j < n - i - 1; j++)
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    doicho = true;
                }
            if (doicho == true)
            {
                for (int j = 0; j < n; j++)
                    b[i][j] = a[j];
                buoc++;
            }
        }
        for (int i = buoc - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            in(b[i], n);
        }
    }
}