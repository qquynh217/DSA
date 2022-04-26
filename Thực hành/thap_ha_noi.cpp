#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void chuyen(int n, char a, char b)
{
    cout << a << " -> " << b << endl;
}
void thap(int n, char a, char b, char c)
{
    if (n == 1)
        chuyen(1, a, c);
    else
    {
        thap(n - 1, a, c, b);
        chuyen(n, a, c);
        thap(n - 1, b, a, c);
    }
}
int main()
{
    int n;
    cin >> n;
    thap(n, 'A', 'B', 'C');
}