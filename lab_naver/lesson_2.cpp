/***********************************
 * 1.. Clean Room Tech.
 * - Starting with an empty program
 * - 1/1
 * 2. List all permutation (hoán vị) 1-n
 * 3. Queens
 ***********************************/
#include <bits/stdc++.h>
using namespace std;
const int MN = 20;
int h[MN];
bool Next(int n)
{
    int g, v;
    for (g = n - 1; g > 0; g--)
        if (h[g] < h[g + 1])
            break;
    if (g < 1)
        return false;
    for (v = n; v > g; v--)
        if (h[v] > h[g])
            break;
    int c = h[g];
    h[g] = h[v];
    h[v] = c;
    g++;
    v = n;
    while (g < v)
    {
        swap(h[g], h[v]);
        g++;
        v--;
    }
    return true;
}
void Print(int a[], int d, int c)
{
    for (int i = d; i <= c; i++)
        cout << a[i] << " ";
    cout << endl;
}
void Per(int n)
{
    for (int i = 1; i <= n; i++)
    {
        h[i] = i;
    }
    int dem = 1;
    do
    {
        cout << dem++ << ":   ";
        Print(h, 1, n);
    } while (Next(n));
}
bool Good(int n)
{
}
void Queen(int n)
{
    for (int i = 1; i <= n; i++)
        Print(h, 1, n);
    do
    {
        if (Good(n))
        {
            Print(h, 1, n);
        }
    } while (Next(n));
}
int main()
{
    Per(6);
    return 0;
}