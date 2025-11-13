#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 2; i <= n / x; i += 2)
    {
        int left = n - i * x;
        if (left % (2 * y) == 0 && left / (2 * y) != 0)
        {
            cout << i << " " << left / y << endl;
        }
    }

    return 0;
}