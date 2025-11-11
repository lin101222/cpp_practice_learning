#include <iostream>
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
    for (int i = 0; i < n; i++)
    {
        if ((i + 1) <= n / 2)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 1;
        }
        cout << arr[i] << " ";
    }

    return 0;
}