// ### 题目描述
// 输入一个整数，判断是否为偶数。是输出 `y e s`，否则输出 `n o`。

// ### 输入
// 输入只有一行，包括 1 个整数（该整数在 1 ~ 10000 的范围内）。

// ### 输出
// 输出只有一行。（注意输出格式，具体请看下方提示）。

// ### 样例
// | 输入 | 输出   |
// |------|--------|
// | 2    | y e s  |
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n%2==0)
    {
        cout<<"y e s"<<endl;
    }
    else
    {
        cout<<"n o"<<endl;
    }
    
    return 0;
}