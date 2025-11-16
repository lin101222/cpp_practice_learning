#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int x, y;
    cin >> x >> y;
    if (x > n)
    {
        arr.push_back(y);
    }
    else
    {
        int store = arr[x - 1];
        arr[x - 1] = y;

        arr.push_back(arr[n - 1]);
        for (int i = n - 1; i > x; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[x] = store;
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}