#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 50 / 3; i++)
    {
        for (int j = 0; j < (50 - i * 3) / 2; j++)
        {
            int k = 30 - i - j;
            if (i * 3 + j * 2 + k == 50 && i + j + k == 30)
            {
                cout << i << " " << j << " " << k << endl;
            }
        }
    }

    return 0;
}