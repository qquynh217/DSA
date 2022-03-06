#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[50];
vector<int> b;
string s[100000];
int k = 0;
void toString()
{
    for (int i = 0; i < b.size(); i++)
    {
        string temp = to_string(b[i]);
        for (int j = 0; j < temp.length(); j++)
            s[k].push_back(temp[j]);
        s[k].push_back(' ');
    }
    k++;
}
void daycon(int i)
{
    for (int j = i; j < n; j++)
    {
        if (b.empty() || (a[j] > b.back() && !b.empty()))
        {
            b.push_back(a[j]);
            if (b.size() > 1)
                toString();
            daycon(j + 1);
            b.pop_back();
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    daycon(0);
    sort(s, s + k);
    for (int i = 0; i < k; i++)
        cout << s[i] << endl;
}