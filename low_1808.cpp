#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int shi = 0;
    int ershi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 10)
        {
            shi++;
        }
        else if (arr[i] == 20)
        {
            ershi++;
        }
    }
    if (shi > ershi)
    {
        cout << 10 << endl;
    }
    else
    {
        cout << 20 << endl;
    }

    return 0;
}