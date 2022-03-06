#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
vector<int> a;
void in()
{
    for (int i = 1; i < a.size(); i++)
    {
        if (i == 1)
            cout << '(';
        cout << a[i];
        if (i == a.size() - 1)
            cout << ") ";
        else
            cout << ' ';
    }
}
int sum = 0;
void phantich(int i)
{
    for (int j = a[i - 1]; j > 0; j--)
    {
        a.push_back(j);
        sum += j;
        if (sum == n)
            in();
        else if (sum < n)
            phantich(i + 1);
        a.pop_back();
        sum -= j;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.push_back(n);
        phantich(1);
        a.clear();
        cout << endl;
    }
}