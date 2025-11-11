#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int count = 0, sum = 0;
    for (int i = 0; i < N; i++)
    {
        int temp = arr[i];
        while (temp != 0)
        {
            if (temp % 10 == x)
            {
                count++;
                sum += arr[i];
                break;
            }
            else
            {
                temp /= 10;
            }
        }
    }
    cout << count <<" ";
    cout << sum << endl;

    return 0;
}