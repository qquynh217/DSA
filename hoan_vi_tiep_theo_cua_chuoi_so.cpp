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
        string s;
        cin >> n >> s;
        string temp = s;
        sort(temp.begin(), temp.end());
        next_permutation(s.begin(), s.end());
        cout << n << " ";
        if (s == temp)
            cout << "BIGGEST";
        else
            cout << s;
        cout << endl;
    }
}