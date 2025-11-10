// ### 1043. 行李托运价格

// #### 问题描述
// 某车站行李托运收费标准为：10公斤或10公斤以下，收费2.5元；超过10公斤的行李，每超过1公斤增加1.5元。请编写程序，输入行李重量，计算托运费。

// #### 输入
// 输入只有一行，包括1个整数（行李重量）。

// #### 输出
// 输出只有一行，包括1个数（保留两位小数，托运费）。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double money=0;
    if (n<=10)
    {
        money=2.5;
    }
    else
    {
        money=2.5+1.5*(n-10);
    }
    cout<<fixed<<setprecision(2)<<money<<endl;
    return 0;
}