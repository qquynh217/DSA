#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, a[100];
vector<int> b;
int temp = 0;
bool check;
void in()
{
    check = true;
    for (int i = 0; i < b.size(); i++)
    {
        if (i == 0)
        {
            cout << "[";
        }
        if (i == b.size() - 1)
            cout << b[i] << "] ";
        else
            cout << b[i] << " ";
    }
}
void daycon(int i)
{
    for (int j = i; j < n; j++)
    {
        b.push_back(a[j]);
        temp += a[j];
        if (temp == k)
            in();
        else if (temp < k)
            daycon(j + 1);
        b.pop_back();
        temp -= a[j];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        check = false;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        daycon(0);
        if (check == false)
            cout << -1;
        cout << endl;
        b.clear();
    }
}