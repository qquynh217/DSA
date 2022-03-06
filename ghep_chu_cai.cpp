#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
char c;
string a;
int check[1000] = {0};
bool nguyenam(char c)
{
    if (c == 'A' || c == 'E')
        return true;
    return false;
}
void in()
{
    int kt = 1;
    for (int i = 1; i < a.size() - 1; i++)
        if (nguyenam(a[i]) && !nguyenam(a[i - 1]) && !nguyenam(a[i + 1]))
        {
            kt = 0;
            break;
        }
    if (kt == 1)
    {
        cout << a << endl;
    }
}
void hoanvi(int i)
{
    for (char j = 'A'; j <= c; j++)
    {
        if (check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
            if (i == c - 'A')
                in();
            else
                hoanvi(i + 1);
            check[j] = 0;
        }
    }
}
int main()
{
    cin >> c;
    a.resize(c - 'A' + 1);
    hoanvi(0);
}