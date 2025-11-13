#include <iostream>
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
    int max = arr[0], min = arr[0];
    int mi = 0, ma = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            ma = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            mi = i;
        }
    }
    int temp1 = arr[mi];
    arr[mi] = arr[0];
    arr[0] = temp1;
    int temp2 = arr[ma];
    arr[ma] = arr[n - 1];
    arr[n - 1] = temp2;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}