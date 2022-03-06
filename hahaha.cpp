#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
string a, b = "AH";
void in()
{
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}
void haha(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        if ((a[i - 1] == 'H' || i == n - 1) && b[j] == 'H')
            continue;
        else
        {
            a[i] = b[j];
            if (i == n - 1)
                in();
            else
                haha(i + 1);
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
        a.push_back('H');
        haha(1);
    }
}