// 花花去文具店买了 1 支笔和 1 块橡皮，已知笔 x 元 / 支，橡皮 y元 / 块，花花付给了老板 n 元，请问老板应该找给花花多少钱？
#include<iostream>
using namespace std;
int main()
{
    int x,y,n;
    cin>>x>>y>>n;
    int num=n-x-y;
    cout<<num<<endl;
    return 0;
}