#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = -n/2; i <=n/2; i++)
    {
        for (int j = 0; j <abs(i)+1 ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}