// 读入三个整数 \( a \)、\( b \)、\( c \)（\( 0 < a, b, c < 10000 \)），数据之间用空格隔开，
// 如果前两个数 \( a \)、\( b \) 的和大于第三个数 \( c \)，那么就输出 `yes`，否则就输出 `no`。
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>c)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    
    return 0;
}