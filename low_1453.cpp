#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
        sum += a;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    sum = sum - arr[0] - arr[n - 1];
    cout << fixed << setprecision(1) << sum * 1.0 / (n - 2) << endl;
    cout << fixed << setprecision(0);
    for (int i = 1; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}