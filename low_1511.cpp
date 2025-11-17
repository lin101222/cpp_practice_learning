#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        int sum = 0;
        while (temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == 13)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}