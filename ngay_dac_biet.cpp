#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[8];
bool check()
{
    if (a[4] == 0)
        return false;
    int mon = a[2] * 10 + a[3];
    int day = a[0] * 10 + a[1];
    if (day == 0 || mon == 0 || mon > 12)
        return false;
    return true;
}
void in()
{
    if (check())
    {
        for (int i = 0; i < 8; i++)
        {
            cout << a[i];
            if (i == 1 || i == 3)
                cout << '/';
        }
        cout << endl;
    }
}
void specialday(int i)
{
    for (int j = 0; j <= 2; j += 2)
    {
        a[i] = j;
        if (i == 7)
            in();
        else
            specialday(i + 1);
    }
}
int main()
{
    specialday(0);
}