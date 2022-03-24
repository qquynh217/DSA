#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void Try(int n)
{
    vector<string> s;
    s.push_back("6");
    s.push_back("8");
    int i = 0;
    while (s[s.size() - 1].length() <= n)
    {
        s.push_back(s[i] + "6");
        s.push_back(s[i] + "8");
        i++;
    }
    cout << s.size() - 2 << endl;
    for (int i = 0; i < s.size() - 2; i++)
        cout << s[i] << " ";
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
        Try(n);
    }
}