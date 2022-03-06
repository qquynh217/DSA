#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void in(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
}
void merge(int a[], int dau, int giua, int cuoi)
{
    int n1 = giua - dau + 1;
    int n2 = cuoi - giua;
    int l[n1], r[n2];
    for (int i = 0; i < n1; i++)
        l[i] = a[dau + i];
    for (int i = 0; i < n2; i++)
        r[i] = a[giua + 1 + i];
    int i = 0, j = 0, k = dau;
    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            a[k] = l[i];
            i++;
        }
        else
        {
            a[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = l[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = r[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int dau, int cuoi)
{
    if (dau < cuoi)
    {
        int giua = dau + (cuoi - dau) / 2;
        mergeSort(a, dau, giua);
        mergeSort(a, giua + 1, cuoi);
        merge(a, dau, giua, cuoi);
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        mergeSort(a, 0, n - 1);
        in(a, n);
    }
}