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
    for (int i = x - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr.pop_back();
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}