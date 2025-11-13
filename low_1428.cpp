#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int max=arr[0],min=arr[0];
    int big=0,sma=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            big=i+1;
        }
        if (arr[i]<=min)
        {
            min=arr[i];
            sma=i+1;
        }
        
    }
    cout<<big<<" "<<sma<<endl;
    
    
    return 0;
}