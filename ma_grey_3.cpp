#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
// so sánh 2 bit liền nhau của mã binary
void converst(string bi)
{
    string gray;
    gray.push_back(bi[0]);
    for (int i = 1; i < bi.length(); i++)
    {
        if (bi[i] != bi[i - 1])
            gray.push_back('1');
        else
            gray.push_back('0');
    }
    cout << gray << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        converst(s);
    }
}