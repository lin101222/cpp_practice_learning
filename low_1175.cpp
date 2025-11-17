#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> arr;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
        sum += a;
    }
    double ave = sum * 1.0 / N;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    cout << sum << endl;
    cout << fixed << setprecision(2) << ave << endl;
    cout << fixed << setprecision(0);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}