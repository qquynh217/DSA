#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void generateGrey(int n)
{
    vector<string> a;
    a.push_back("0");
    a.push_back("1");
    for (int i = 2; i <= n; i++)
    {
        vector<string> b = a;
        for (int i = 0; i < a.size(); i++)
            a[i].insert(a[i].begin(), '0');
        for (int i = a.size() - 1; i >= 0; i--)
        {
            b[i].insert(b[i].begin(), '1');
            a.push_back(b[i]);
        }
    }
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        generateGrey(n);
    }
}
/*
    Ý tưởng: n = 3
    n = 2: 00 01 11 10
    + Chèn 0 vào mảng xuôi: {000,001,011,010}
    + Chèn 1 vào mảng ngược: {110,111,101,100}
    Hợp 2 mảng: n = 3: {000,001,011,010,110,111,101,100}
*/