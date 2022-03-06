#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[60];
void buoc()
{
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for (int i = 4; i <= 50; i++)
        a[i] = a[i - 3] + a[i - 2] + a[i - 1];
}
int main()
{
    int t;
    cin >> t;
    buoc();
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}