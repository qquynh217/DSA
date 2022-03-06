#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k;
string a[50], b[50];
int mark[50];
void in()
{
    for (int i = 1; i <= k; i++)
        cout << b[i] << " ";
    cout << endl;
}
void tohop(int i)
{
    for (int j = mark[i - 1] + 1; j <= n - k + i; j++)
    {
        mark[i] = j;
        b[i] = a[j];
        if (i == k)
            in();
        else
            tohop(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    cin.ignore();
    string temp;
    set<string> s;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.insert(temp);
    }
    int j = 1;
    for (auto i : s)
    {
        a[j++] = i;
    }
    n = s.size();
    tohop(1);
}