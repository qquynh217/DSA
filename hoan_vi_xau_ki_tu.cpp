#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
string a, b;
map<char, int> check;
void in()
{
    cout << b << " ";
}
void hoanvi(int i)
{
    for (int j = 0; j < a.length(); j++)
    {
        if (check[a[j]] == 0)
        {
            b[i] = a[j];
            check[a[j]] = 1;
            if (i == a.length() - 1)
                in();
            else
                hoanvi(i + 1);
            check[a[j]] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        cin >> a;
        b = a;
        for (int i = 0; i < a.length(); i++)
            check[a[i]] = 0;
        hoanvi(0);
        check.clear();
        cout << endl;
    }
}