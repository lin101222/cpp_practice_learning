#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <=n/2+1; i++)
    {
        for (int j = 1; j <=n+1; j++)
        {
            if (j<=i||j>n-i+1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }
    for (int i = 1; i <= n/2; i++)
    {
        for (int j = 1; j<=n+1; j++)
        {
            if (j>(n+1)/2-i&&j<=(n+1)/2+i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            
            
        }
        cout<<endl;
    }
    
    
    
    return 0;
}