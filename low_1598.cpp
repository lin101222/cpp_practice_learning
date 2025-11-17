// ### 1598. 文具店的折扣

// #### 问题描述
// 花花去文具店买了1支笔和1块橡皮，已知笔 \( x \) 元/支，橡皮 \( y \) 元/块，
// 文具店今天有活动，可以给顾客打9折（用购买总价 \( \times 0.9 \)），花花付给了老板 \( n \) 元，请问老板应该找给花花多少钱？

// #### 输入
// 三个整数 \( x \)、\( y \)、\( n \)，分别代表了笔的单价、橡皮的单价和花花付给老板的钱（已知花花付给老板的钱 \( n >=x + y \)）。

// #### 输出
// 一个小数（保留1位小数），代表老板应该找给花花的钱。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y,n;
    cin>>x>>y>>n;
    double repay=n-(x+y)*0.9;
    cout<<fixed<<setprecision(1)<<repay<<endl;
    return 0;
}