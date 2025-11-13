#include<iostream>
using namespace std;
int main()
{
    for (int i =1000; i < 10000; i++)
    {
        int g=i%10;
        int s=i/10%10;
        int b=i/100%10;
        int q=i/1000;
        int re=g*1000+s*100+b*10+q;
        if (i*9==re)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}