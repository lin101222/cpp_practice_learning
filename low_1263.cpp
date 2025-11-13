#include <iostream>
using namespace std;
int main()
{
    int n = 457;
    while (1)
    {
        int yiyv8 = n % 8;
        int eryv8 = n / 8 % 8;
        int sanyv8 = n / 64 % 8;
        int shang8 = n / 512;
        int yiyv17 = n % 17;
        int eryv17 = n / 17 % 17;
        int shang17 = n / 17 / 17;
        if (yiyv8 == 1 && yiyv17 == 4 && eryv17 == 15 && eryv8 == 1 && sanyv8 == 7 && shang17 == 2 * shang8)
        {
            cout << n;
            break;
        }
        n++;
    }

    return 0;
}