// 米老鼠发现了厨房放了 n 颗糖果，它一次可以背走 a 颗，请问米老鼠背了 x 次之后还剩多少颗？
#include<iostream>
using namespace std;
int main()
{
    int n,a,x;
    cin>>n>>a>>x;
    int num=n-a*x;
    cout<<num<<endl;
    return 0;
}