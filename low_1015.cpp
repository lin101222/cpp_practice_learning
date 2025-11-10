// ### 1015 - 鸡兔同笼问题

// #### 题目描述
// 鸡兔同笼问题：一个笼子里面有鸡若干只，兔若干只。共有头 50 个，共有腿 160 条。求鸡兔各多少只？
// #### 输出
// 两个整数，在一行。
// 鸡的只数 兔的只数。
// 中间空格隔开！
#include<iostream>
using namespace std;
int main()
{
    int head=50;
    int leg=160;
    int r=(leg-head*2)/2;
    int c=head-r;
    cout<<c<<" "<<r<<endl;
    return 0;
}