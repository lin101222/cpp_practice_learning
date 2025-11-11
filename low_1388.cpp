#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] <= n + 30)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}