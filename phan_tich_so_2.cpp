#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
vector<vector<int>> a;
int sum;
vector<int> temp;
void phantich(int i)
{
    for (int j = i; j >= 1; j--)
    {
        temp.push_back(j);
        sum += j;
        if (sum == n)
            a.push_back(temp);
        else if (sum < n)
            phantich(j);
        temp.pop_back();
        sum -= j;
    }
}
void in()
{
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            if (j == 0)
                cout << "(";
            if (j != a[i].size() - 1)
                cout << a[i][j] << ' ';
            else
                cout << a[i][j] << ") ";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        a.clear();
        temp.clear();
        phantich(n);
        in();
    }
}