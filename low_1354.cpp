#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    int count=0;;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            count++;
        }
        
    }
    cout<<fixed<<setprecision(2)<<count*1.0/n<<endl;;
    
    return 0;
}