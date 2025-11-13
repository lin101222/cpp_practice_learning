#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != min)
        {
            sum += arr[i];
            count++;
        }
    }
    cout << fixed << setprecision(1) << sum * 1.0 / count << endl;

    return 0;
}