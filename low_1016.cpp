// ### 1016 - 买小猫小狗

// #### 题目描述
// 某动物饲养中心用 \( X \) 元专款购买小狗（每只 \( A \) 元）和小猫（每只 \( B \) 元）两种小动物。要求专款专用（至少猫狗各一），正好用完。请求出方案的总数，如没有请输出 0。

// #### 输入
// 输入一行，只有三个整数，分别为 \( X, A, B \)。（\( 100 < X < 32768 \)，\( 1 \leq A \leq 100 \)，\( 1 \leq B \leq 100 \)）

// #### 输出
// 输出只有一行（末尾有一个回车符号），包括 1 个整数。
#include<iostream>
using namespace std;
int main()
{
    int X,A,B;
    cin>>X>>A>>B;
    X=X-A-B;
    int count =0;
    for (int  i = 0; i <= X/A; i++)
    {
        int left=X-A*i;
        if (left%B==0)
        {
            count++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}