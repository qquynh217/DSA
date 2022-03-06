#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    cout << a.back();
}