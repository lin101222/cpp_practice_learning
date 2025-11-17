#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n - 2; i++)
    {
        int temp = n - i;
        for (int j = i; j < temp - 1; j++)
        {
            int k = n - i - j;
            if (k >= j)
            {
                cout << n << "=" << i << "+" << j << "+" << k << endl;
            }
        }
    }

    return 0;
}