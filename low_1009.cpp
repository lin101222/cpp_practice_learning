// ### 题目描述
// 给你 \( n \) 个整数，将其逆序输出。

// #### 输入
// - 第一行一个整数 \( n \)（\( 3 \leq n \leq 100 \)），代表数的个数。
// - 第二行 \( n \) 个整数（空格隔开），这些数在 \( 0 \sim 10^6 \) 之间。

// #### 输出
// \( n \) 个整数（空格隔开）。
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int  i = 1; i <=n; i++)
    {
        cout<<arr[n-i];
        cout<<" ";
    }
    
    
    return 0;
}

