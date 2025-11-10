// ### 题目描述
// 已知有三个不等的数，将其中的最大数找出来。

// ### 输入
// 输入只有一行，包括3个整数。之间用一个空格分开。

// ### 输出
// 输出只有一行（这意味着末尾有一个回车符号），包括1个整数。

// ### 样例
// | 输入   | 输出 |
// |--------|------|
// | 1 5 8  | 8    |
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max=0;
    if (a>b)
    {
        max=a>c?a:c;
        cout<<max<<endl;
    }
    else
    {
        max=b>c?b:c;
        cout<<max<<endl;
    }
    
    return 0;
}