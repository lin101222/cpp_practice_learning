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
        int temp = arr[i];
        int count = 0;

        while (temp != 0)
        {
            if (temp % 2 == 0)
            {
                temp /= 10;
                count++;
            }
            else
            {
                count = 0 ;
                break;
            }
        }
        if (count % 2 == 0 && count != 0)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}