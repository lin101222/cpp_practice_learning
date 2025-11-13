#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    while (1)
    {
        if (n % 2 == 1 && n % 3 == 2 && n % 5 == 4 && n % 6 == 5 && n % 7 == 0)
        {
            cout << n << endl;
            break;
        }

        n++;
    }

    return 0;
}