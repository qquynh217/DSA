#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
ll giaithua(int n)
{
    if (n == 0)
        return 1;
    return giaithua(n - 1) * n;
}
int main()
{
    int n;
    cin >> n;
    cout << giaithua(n);
}