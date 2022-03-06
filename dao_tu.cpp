#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, temp;
        getline(cin, s);
        stringstream ss(s);
        vector<string> res;
        while (ss >> temp)
        {
            res.push_back(temp);
        }
        for (int i = res.size() - 1; i >= 0; i--)
            cout << res[i] << " ";
        cout << endl;
    }
}