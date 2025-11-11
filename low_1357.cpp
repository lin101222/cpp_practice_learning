#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        sum1 += arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        sum2 += arr2[i];
    }
    double ave1 = sum1 * 1.0 / n;
    double ave2 = sum2 * 1.0 / n;
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        s1 += (arr1[i] - ave1) * (arr1[i] - ave1);
    }
    for (int i = 0; i < n; i++)
    {
        s2 += (arr2[i] - ave2) * (arr2[i] - ave2);
    }
    if (s1 < s2)
    {
        cout << "jia" << endl;
    }
    else
    {
        cout << "yi" << endl;
    }

    return 0;
}