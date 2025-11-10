// ### 1010 - 数组元素的排序

// #### 题目描述
// 对数组的元素按从小到大进行排序。

// #### 输入
// - 第一行有一个整数 \( n \)（\( 5 \leq n \leq 10 \)）；
// - 第二行有 \( n \) 个整数，每个整数的值在 \([0, 10^9]\) 的范围内。

// #### 输出
// 输出排序后的数组。
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int k = 0; k < n - 1; k++)
    {
        for (int j = 0; j < n - k - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    
    return 0;
}