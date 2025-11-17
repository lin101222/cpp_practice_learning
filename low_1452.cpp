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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    int tar = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        else
        {
            cout << arr[i];
            tar = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << arr[i];
        }
        else
        {
            break;
        }
    }
    for (int i = tar + 1; i < n; i++)
    {
        cout << arr[i];
    }
}