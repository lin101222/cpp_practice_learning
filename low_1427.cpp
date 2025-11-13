#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<double> arr;
    double max = 0;
    for (int i = 0; i < n; i++)
    {
        double a;
        cin >> a;
        arr.push_back(a);
        if (a > max)
        {
            max = a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            arr[i] *= 0.9;
            break;
        }
    }
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] * 0.9;
    }
    cout<<fixed<<setprecision(1)<<sum<<endl;

    return 0;
}