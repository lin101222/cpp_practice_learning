#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[n];
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<fixed<<setprecision(1)<<sum*1.0/n*m;
    
    return 0;
}