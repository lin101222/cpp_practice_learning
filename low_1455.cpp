#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    vector<int> arr_copy;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
        arr_copy.push_back(a);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int x = arr_copy[i];
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == x)
            {
                cout << j + 1 << " ";
                break;
            }
        }
    }

    return 0;
}