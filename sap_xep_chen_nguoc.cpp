#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void in(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[200], b[200][200];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        c.push_back(a[i]);
        sort(c.begin(), c.end());
        for (int j = 0; j < c.size(); j++)
            b[i][j] = c[j];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "Buoc " << i << ": ";
        in(b[i], i + 1);
    }
}