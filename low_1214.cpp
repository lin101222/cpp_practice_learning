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
    int y;
    cin >> y;
    int x = 1;
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            x = i + 1;
        }
    }

    if (x > n)
    {
        arr.push_back(y);
    }
    // 此处使用临时存储的方法，但是同样可以先移动再改变，这样就不用调用中间变量
    else
    {
        // 存储会被替换的元素
        int store = arr[x];
        arr[x] = y;

        arr.push_back(arr[n - 1]);
        // 从后往前，一直到被替换数的后一位
        for (int i = n - 1; i > x + 1; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[x + 1] = store;
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}