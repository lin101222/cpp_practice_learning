// ### 1027. 求任意三位数各个数位上数字的和

// #### 问题描述
// 对于一个任意的三位自然数 \( x \)，编程计算其各个数位上的数字之和 \( S \)。

// #### 输入
// 输入一行，只有一个整数 \( x(100 \leq x \leq 999) \)。

// #### 输出
// 输出只有一行，包括 1 个整数。
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ge=n%10;
    int shi=n/10%10;
    int bai=n/100;
    cout<<ge+shi+bai<<endl;
    return 0;
}