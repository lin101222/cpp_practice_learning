#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 60)
        {
            cout << "no" << endl;
            return 0;
        }
        else if (arr[i] >= 90)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << 3 << endl;
    }
    else if (count == 3 || count == 4)
    {
        cout << 2 << endl;
    }
    else if (count >= 5)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}