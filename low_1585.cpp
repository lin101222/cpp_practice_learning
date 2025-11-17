#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
        sum += a;
    }
    double ave = sum * 1.0 / n;
    int min = 0;
    double cha = abs(arr[0] - ave);
    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i] - ave) < cha)
        {
            cha = abs(arr[i] - ave);
            min = i;
        }
        
    }
    cout << arr[min] << endl;

    return 0;
}