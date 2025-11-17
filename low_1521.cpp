#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= 1.0 / i;
        }
        else
        {
            sum += 1.0 / i;
        }
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}