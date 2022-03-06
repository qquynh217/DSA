#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
// so sánh mã gray tại vị trí i và mã bi tại i-1
void convert(string gray)
{
    string bi;
    bi.push_back(gray[0]);
    for (int i = 1; i < gray.length(); i++)
    {
        if (gray[i] == bi[i - 1])
            bi.push_back('0');
        else
            bi.push_back('1');
    }
    cout << bi << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        convert(s);
    }
}