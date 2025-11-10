// ### 题目描述
// 编程求 \( 1 + 1/2 + 1/3 + \cdots + 1/n \)。

// #### 输入
// 输入一行，只有一个整数 \( n(1 \leq n \leq 200) \)。

// #### 输出
// 输出只有一行（末尾有一个回车符号），包括 1 个实数（保留 3 位小数）。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double res=0;

    for (int i = 1; i <=n; i++)
    {
        res+=1.0/i;
    }
    cout<<fixed<<setprecision(3)<<res<<endl;
    
    return 0;
}