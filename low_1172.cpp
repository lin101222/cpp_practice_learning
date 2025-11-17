#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> arr;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
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
    cout << arr[K - 1] << endl;

    return 0;
}