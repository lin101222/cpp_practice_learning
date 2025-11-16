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
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    int tar = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            tar = i + 1;
            int temp = min;
            arr[i] = arr[0];
            arr[0] = temp;
            break;
        }
    }
    cout<<tar<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}