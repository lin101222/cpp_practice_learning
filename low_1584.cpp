#include <iostream>
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
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            count++;
        }
    }
    cout << max + min * count << endl;
    cout << sum - max - min * count << endl;
    return 0;
}