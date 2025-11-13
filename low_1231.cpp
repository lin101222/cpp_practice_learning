#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double ave = sum * 1.0 / n;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= ave)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    cout << fixed << setprecision(1) << ave << " ";
    cout << fixed << setprecision(0) << c1 << " " << c2;

    return 0;
}