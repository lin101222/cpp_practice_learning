#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    double ans = 0;
    if (n % 2 == 0)
    {
        ans = (arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    }
    else
    {
        ans = arr[n / 2];
    }
    cout << fixed << setprecision(1) << ans << endl;

    return 0;
}