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
    int x;
    cin >> x;
    int store = arr[x - 1];
    for (int i = x; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = store;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}