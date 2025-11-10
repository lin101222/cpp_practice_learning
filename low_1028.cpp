//输入一个三位自然数，然后把这个数的百位数与个位数对调，输出对调后的数。
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int ge=num%10;
    int shi=num/10%10;
    int bai=num/100%10;
    int temp=ge;
    ge=bai;
    bai=temp;
    int num1=bai*100+shi*10+ge;
    cout <<num1<<endl;
    return 0;
}