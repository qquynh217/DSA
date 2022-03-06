#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int a[n + 1][n + 1];
    string s;
    memset(a, 0, sizeof a);
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
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}