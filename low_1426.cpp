#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
void sickPerson(int arr[],int len, int lowAge, int highAge)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] >= lowAge && arr[i] <= highAge)
        {
            count++;
        }
    }
    cout << count << " " << fixed << setprecision(2) << count * 100.0 / len << "%" << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int  len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sickPerson(arr,len, 0, 18);
    sickPerson(arr,len, 19, 35);
    sickPerson(arr,len, 36, 60);
    sickPerson(arr,len, 61, 200);

    return 0;
}