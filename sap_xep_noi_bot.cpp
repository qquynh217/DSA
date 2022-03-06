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
    int n;
    cin >> n;
    int a[200];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int buoc = 1;
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
            cout << "Buoc " << buoc++ << ": ";
            in(a, n);
        }
    }
}