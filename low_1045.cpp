// ### 1045. 判断能否构成三角形

// #### 问题描述
// 输入三个整数，代表三条线段的长度，判断它们能否构成三角形。若能构成，输出`Yes`；否则输出`No`。
// 三角形的判断标准是**任意两边之和大于第三边**。
// 例如，边长3、5、7满足 \( 3+5>7 \)、\( 3+7>5 \)、\( 5+7>3 \)，可构成三角形；边长3、8、5因 \( 3+5 \not> 8 \)，无法构成三角形。

// #### 输入
// 三个整数（三条线段的长度）。

// #### 输出
// `Yes` 或 `No`（判断能否构成三角形）。
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max=a;
    if (max<b)
    {
        max=b;
    }
    if (max<c)
    {
        max=c;
    }
    if (max>=a+b+c-max)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    
    
    return 0;
}