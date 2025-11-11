#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int zhi = 0, dun = 0, rui = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 90)
        {
            zhi++;
        }
        else if (arr[i] < 90)
        {
            rui++;
        }
        else
        {
            dun++;
        }
    }
    cout << zhi << " " << rui << " " << dun << endl;

    return 0;
}