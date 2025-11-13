#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = n / x;; i--)
    {
        if ((n - x * i) % y == 0 && (n - x * i) / y != 0)
        {
            cout << i << " " << (n - x * i) / y << endl;
            break;
        }
    }

    return 0;
}