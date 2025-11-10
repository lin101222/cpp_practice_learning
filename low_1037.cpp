// ### 1037. 恐龙园买门票

// #### 问题描述
// 恐龙园门票规则：身高低于1.3米购儿童票（60元），否则购成人票（120元）。编写程序，输入身高，输出相应门票价格。

// #### 输入
// 一行，一个人的身高（数值类型，代表身高，单位米）。

// #### 输出
// 一行，一个整数（门票价格，60或120）。
#include<iostream>
using namespace std;
int main()
{
    double metre;
    cin>>metre;
    int money=0;
    if (metre<1.3)
    {
        money=60;
    }
    else
    {
        money=120;
    }
    cout<<money<<endl;
    return 0;
}