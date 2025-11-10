// ### 1029. 倒序输出一个四位整数

// #### 问题描述
// 任意读入一个四位整数，颠倒后输出。

// #### 输入
// 输入一行，只有一个整数 \( x(1000 \leq x \leq 9999) \)。

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
    int bai=n/100%10;
    int qian=n/1000;
    cout<<ge*1000+shi*100+bai*10+qian<<endl;
    return 0;
}