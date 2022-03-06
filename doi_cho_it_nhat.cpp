#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1005];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dem = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
                if (a[min] > a[j])
                    min = j;
            if (min > i)
            {
                dem++;
                swap(a[min], a[i]);
            }
        }
        cout << dem << endl;
    }
}