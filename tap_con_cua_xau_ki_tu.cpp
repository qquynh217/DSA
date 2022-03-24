#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
string s, temp;
int k, n;
vector<string> res;
void Try(int i)
{
    for (int j = i; j < s.size(); j++)
    {
        temp.push_back(s[j]);
        if (temp.size() == n)
            res.push_back(temp);
        else if (temp.size() < n)
        {
            res.push_back(temp);
            Try(j + 1);
        }
        temp.pop_back();
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res.clear();
        temp.clear();
        cin >> n;
        cin.ignore();
        cin >> s;
        Try(0);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << ' ';
        cout << endl;
    }
}