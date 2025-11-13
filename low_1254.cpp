// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<50<<endl;
//     cout<<95959<<endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 95859;//求下一个对称数
    //死循环
    while(1){
        i++;
        //求i倒过来的数，判断对称，用短除法
        int t = i,s = 0;
        while(t != 0){
            s = s * 10 + t % 10;
            t = t / 10;
        }
        //如果是对称的，找到了
        if(s == i){
            cout<<(i-95859)/2<<endl<<i;
            break;
        }
    }
    return 0;
}