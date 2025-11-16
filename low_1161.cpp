#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> arr;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int tar = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] <= n && arr[i + 1] >= n)
        {
            tar = i + 1;
        }
    }
    arr.push_back(arr[m - 1]);
    for (int i = m - 1; i > tar; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[tar] = n;
    for (int i = 0; i < m + 1; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}