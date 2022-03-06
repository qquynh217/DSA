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
        int a[10000];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long min = abs(a[0] + a[1]), mint = a[0] + a[1];
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (abs(a[i] + a[j]) < min)
                {
                    min = abs(a[i] + a[j]);
                    mint = a[i] + a[j];
                }
        cout << mint << endl;
    }
}