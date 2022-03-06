#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void in(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cout << "Buoc " << i << ": ";
        b.push_back(a[i]);
        sort(b.begin(), b.end());
        in(b);
    }
}