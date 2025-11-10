#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 20; i++)
    {
        for (int j = (100 - i * 5) / 3; j > 0; j--)
        {
            int k = (100 - i * 5 - j * 3) * 3;
            if (i + j + k == 100)
            {
                cout << i << " " << j << " " << k << endl;
                ;
            }
        }
    }

    return 0;
}