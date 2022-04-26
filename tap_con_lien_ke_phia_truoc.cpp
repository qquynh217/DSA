/*************
 - Duyệt từ cuối lên đầu, nếu gặp a[i] != a[i-1]+1:
    + giảm a[i] xuống 1 đơn vị
    + nếu a[k] != n thì tăng phần từ i+1 đến k lên 1 đơn vị
 - Sau khi duyệt không có vị trí a[i] != a[i-1]+1 và a[1]=1 => cấu hình đầu tiên
 * **********/
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
        int n, k, a[1005];
        cin >> n >> k;
        a[0] = 0;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        bool check = false;
        for (int i = k; i >= 1; i--)
        {
            if (a[i] != a[i - 1] + 1)
            {
                a[i]--;
                check = true;
                if (a[k] != n)
                    for (int j = i + 1; j <= k; j++)
                        a[j]++;
                break;
            }
        }
        if (check)
            for (int i = 1; i <= k; i++)
                cout << a[i] << ' ';
        else
            for (int i = n - k + 1; i <= n; i++)
                cout << i << ' ';
        cout << endl;
    }
}