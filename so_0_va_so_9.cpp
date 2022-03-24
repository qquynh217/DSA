#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
string Try(int n)
{
    if (9 % n == 0)
        return "9";
    string s[1000];
    s[0] = "9";
    int i = 0, k = 1;
    while (true)
    {
        s[k] = s[i] + "0";
        if (stoi(s[k]) % n == 0)
            return s[k];
        s[++k] = s[i] + "9";
        if (stoi(s[k]) % n == 0)
            return s[k];
        k++;
        i++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << Try(n) << endl;
    }
}