#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
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
            if (arr[i] % 2 == 0)
            {
                arr[i] *= 2;
                break;
            }
            else
            {
                arr[i] += 1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}