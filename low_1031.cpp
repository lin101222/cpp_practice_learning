// ### 题目描述
// 编一程序，将摄氏温度换为华氏温度。公式为：f = 9/5 * c + 32 。其中 f  为华氏温度， c 是摄氏温度。

// ### 输入
// 输入一行，只有一个整数 \( c \)。

// ### 输出
// 输出只有一行，包括 1 个实数。（保留两位小数）
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int c;
    double f;
    cin>>c;
    f=(9/5.0)*c+32;
    cout<<fixed<<setprecision(2)<<f<<endl;
    return 0;
}