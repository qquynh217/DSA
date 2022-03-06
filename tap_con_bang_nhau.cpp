#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cuoi = n;
        while (cuoi > 2)
        {
            sort(a.begin(), a.end());
            a[cuoi - 2] = a[cuoi - 1] - a[cuoi - 2];
            cuoi--;
            a.pop_back();
        }
        if (a[0] == a[1])
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}