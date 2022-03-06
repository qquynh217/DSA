#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int a[n + 1][n + 1] = {0};
    string s;
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        stringstream ss(s);
        string temp;
        while (ss >> temp)
        {
            a[i][stoi(temp)] = 1;
            a[stoi(temp)][i] = 1;
        }
    }
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i][j] == 1)
                cout << i << ' ' << j << endl;
}