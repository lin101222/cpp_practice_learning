#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 501; i++)
    {
        if (i%3==2&&i%5==3&&i%7==2)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}