// 1035. 判断成绩等级

// 问题描述
// 输入某学生成绩，如果 86 分以上(包括 86 分) 则输出 VERY GOOD ，
// 如果在 60 到 85 之间的则输出 GOOD (包括 60 和 85 )，
// 小于 60 的则输出 BAD 。

// 输入
// 输入只有一行，包括 1 个整数。

// 输出
// 输出只有一行（这意味着末尾有一个回车符号）。
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n>=86)
    {
        cout<<"VERY GOOD"<<endl;
    }
    if (n>=60&&n<=85)
    {
        cout<<"GOOD"<<endl;
    }
    if (n<60)
    {
        cout<<"BAD"<<endl;
    }
    
    return 0;
}