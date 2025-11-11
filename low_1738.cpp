#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int KING = 0;
    int WIN = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if ((i + 1) % 2 == 1)
        {
            KING += arr[i];
        }
        else
        {
            WIN += arr[i];
        }
    }
    cout << "KING " << KING << endl;
    cout << "WIN " << WIN << endl;
    if (KING >= WIN)
    {
        cout << "KING" << endl;
    }
    else
    {
        cout << "WIN" << endl;
    }

    return 0;
}