#include <bits/stdc++.h>
using namespace std;
int k;
char c;
string a;
void in()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << endl;
}
void lietke(int i)
{
    for (char j = a[i - 1]; j <= c; j++)
    {
        a[i] = j;
        if (i == k)
            in();
        else
            lietke(i + 1);
    }
}
int main()
{
    cin >> c >> k;
    a.resize(k + 1);
    a[0] = 'A';
    lietke(1);
}