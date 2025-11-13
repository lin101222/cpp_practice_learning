#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 36 / 4; i++)
    {
        for (int j = 1; j < (36 - i * 4) / 3; j++)
        {
            int k = 36 - i - j;
            if (i * 4 + j * 3 + k * 1 / 2 == 36 && i + j + k == 36 && k != 0 && k % 2 == 0)
            {
                cout << i << " " << j << " " << k << endl;
            }
        }
    }

    return 0;
}